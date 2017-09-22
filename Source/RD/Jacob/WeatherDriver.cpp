// vRift Code

#include "WeatherDriver.h"


// Sets default values
AWeatherDriver::AWeatherDriver()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//lights
	USceneComponent* Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = Root;

	DynamicSun = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("SunLight"));
	DynamicMoon = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("MoonLight"));

	DynamicSun->AttachTo(RootComponent);
	DynamicMoon->AttachTo(RootComponent);

}

// Called when the game starts or when spawned
void AWeatherDriver::BeginPlay()
{
	Super::BeginPlay();
	
	//init time
	if (bUseCustomTime)
	{
		CurrentTime = FDateTime(CustomTimeYear, CustomTimeMonth, CustomTimeDay, CustomTimeHour, CustomTimeMinute, CustomTimeSecond, 0);
	}
	else
	{
		CurrentTime = FDateTime::UtcNow() + FTimespan(TimeZone, 0, 0);
	}

	//init counters
	this->CurrentSecond = CurrentTime.GetSecond();
	this->CurrentMinute = CurrentTime.GetMinute();
	this->CurrentHour = CurrentTime.GetHour();
	this->CurrentDay = CurrentTime.GetDay();
	this->CurrentMonth = CurrentTime.GetMonth();
	this->CurrentYear = CurrentTime.GetYear();

	//updater
	RealTime = FDateTime::UtcNow();
	RealTimeOld = RealTime;
}

// Called every frame
void AWeatherDriver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//lights
	//change the pitch for the sun
	SunPitch += (DeltaTime * SunSpeed);

	//add the rotation to a 0 rotation
	FRotator SunRotation = FRotator::ZeroRotator;
	FRotator MoonRotation = SunRotation;
SunRotation.Add(this->SunPitch, 0, 0);
MoonRotation.Add((this->SunPitch + 180 >= 360) ? this->SunPitch - 180 : SunPitch + 180, 0, 0);

//set new rotation
DynamicSun->SetWorldRotation(SunRotation);
DynamicMoon->SetWorldRotation(MoonRotation);

//correct for bugged axis
if (this->SunPitch >= 360)
{
	SunPitch = 0;
}

//time
RealTime = FDateTime::UtcNow();

//update on every second, regardless of time system
if (RealTime.GetSecond() != RealTimeOld.GetSecond())
{
	RealTimeOld = RealTime;
	this->CurrentSecond++;

	if (this->CurrentSecond > 59)
	{
		this->CurrentSecond = 0;
		this->CurrentMinute++;
	}
	if (this->CurrentMinute > 59)
	{
		this->CurrentMinute = 0;
		this->CurrentHour++;
	}
	if (this->CurrentHour > 23)
	{
		this->CurrentHour = 1;
		this->CurrentDay++;
	}
	if (this->CurrentDay > CurrentTime.DaysInMonth(CurrentTime.GetYear(), CurrentTime.GetMonth()))
	{
		this->CurrentDay = 1;
		this->CurrentMonth++;
	}
	if (this->CurrentMonth > 12)
	{
		this->CurrentMonth = 1;
		this->CurrentYear++;
	}
	CurrentTime = FDateTime(CurrentYear, CurrentMonth, CurrentDay, CurrentHour, CurrentMinute, CurrentSecond);
}
}

//time of day
int AWeatherDriver::GetCurrentYear()
{
	return CurrentTime.GetYear();
}

int AWeatherDriver::GetCurrentMonth()
{
	return CurrentTime.GetMonth();
}

int AWeatherDriver::GetCurrentDay()
{
	return CurrentTime.GetDay();
}

int AWeatherDriver::GetCurrentHour()
{
	return CurrentTime.GetHour();
}

int AWeatherDriver::GetCurrentMinute()
{
	return CurrentTime.GetMinute();
}

int AWeatherDriver::GetCurrentSecond()
{
	return CurrentTime.GetSecond();
}

FString AWeatherDriver::GetCurrentTime()
{
	return CurrentTime.ToString();
}

//weather
bool AWeatherDriver::IsWeatherActive()
{
	return bIsWeather;
}

void AWeatherDriver::UpdateWeather(int Day)
{
	//generate number between 1 and 100
	float x = rand() % 100 + 1;
	bIsWeather = x > 40;

	int* a = new int(50 * sin(.01729 * Day - 1.6) + 40);
	int* b = new int(40 * sin(.01729 * Day - 1.6) + 40);

	if (*a > *b)
	{
		CurrentTemp = rand() % *a + *b;
	}
	else
	{
		CurrentTemp = rand() % *b + *a;
	}
	CurrentWeather = (bIsWeather) ? (CurrentTemp > 32) ? WeatherType::Rain : WeatherType::Snow : WeatherType::Sun;

	//make state machine here?
}

UParticleSystem* AWeatherDriver::GetCurrentWeatherParticle()
{
	switch (CurrentWeather)
	{
	case WeatherType::Rain:
		return RainParticle;
	case WeatherType::Snow:
		return SnowParticle;
	default:
		return nullptr;
	}
}

WeatherType AWeatherDriver::GetCurrentWeather()
{
	return CurrentWeather;
}

FString AWeatherDriver::GetCurrentWeatherString()
{
	switch (CurrentWeather)
	{
	case WeatherType::Sun:
		return "Sun";
	case WeatherType::Rain:
		return "Rain";
	case WeatherType::Snow:
		return "Snow";
	default:
		return "NaN";
	}
}

