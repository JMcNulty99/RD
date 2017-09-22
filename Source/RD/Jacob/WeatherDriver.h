// vRift Code

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/DirectionalLightComponent.h"
#include "CoreUObject.h"
#include "DateTime.h"
#include "TimeSpan.h"
#include "Particles/ParticleSystem.h"
#include "GameplayDebuggerTypes.h"
#include "WeatherDriver.generated.h"

UENUM(BlueprintType, Category = "Weather")
enum class WeatherType : uint8
{
	Sun		UMETA(DisplayName = "Sun"),
	Rain	UMETA(DisplayName = "Rain"),
	Snow	UMETA(DisplayName = "Snow")
};

UCLASS()
class RD_API AWeatherDriver : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWeatherDriver();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//-------------------------------------------------------------------------------//
	//								time of day										 //
	//-------------------------------------------------------------------------------//

	//variables
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sun")
		UDirectionalLightComponent* DynamicSun;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon")
		UDirectionalLightComponent* DynamicMoon;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sun")
		float SunSpeed = 1.0;
	
	UPROPERTY(EditAnywhere, Category = "Time")
		int TimeZone = -8;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Time")
		bool bUseCustomTime = false;
	
	UPROPERTY(EditAnywhere, Category = "Time")
		int CustomTimeSecond;
	
	UPROPERTY(EditAnywhere, Category = "Time")
		int CustomTimeMinute;
	
	UPROPERTY(EditAnywhere, Category = "Time")
		int CustomTimeHour;
	
	UPROPERTY(EditAnywhere, Category = "Time")
		int CustomTimeDay;
	
	UPROPERTY(EditAnywhere, Category = "Time")
		int CustomTimeMonth;
	
	UPROPERTY(EditAnywhere, Category = "Time")
		int CustomTimeYear;

	//functions
	//int
	UFUNCTION(BlueprintCallable)
		int GetCurrentYear();
	
	UFUNCTION(BlueprintCallable)
		int GetCurrentMonth();
	
	UFUNCTION(BlueprintCallable)
		int GetCurrentDay();
	
	UFUNCTION(BlueprintCallable)
		int GetCurrentHour();
	
	UFUNCTION(BlueprintCallable)
		int GetCurrentMinute();
	
	UFUNCTION(BlueprintCallable)
		int GetCurrentSecond();

	//FString
	UFUNCTION(BlueprintCallable)
		FString GetCurrentTime();

	//-------------------------------------------------------------------------------//
	//								  weather										 //
	//-------------------------------------------------------------------------------//

	//variables
	UPROPERTY(EditAnywhere, Category = "Weather")
		float CurrentTemp;

	UPROPERTY()
		WeatherType CurrentWeather;

	UPROPERTY(EditAnywhere, Category = "Weather")
		UParticleSystem* RainParticle;

	UPROPERTY(EditAnywhere, Category = "Weather")
		UParticleSystem* SnowParticle;

	//functions
	UFUNCTION(BlueprintCallable)
		bool IsWeatherActive();
	
	UFUNCTION(BlueprintCallable)
		FString GetCurrentWeatherString();

	UFUNCTION(BlueprintCallable)
		WeatherType GetCurrentWeather();

	UFUNCTION(BlueprintCallable)
		void UpdateWeather(int Day);

	UFUNCTION(BlueprintCallable)
		UParticleSystem* GetCurrentWeatherParticle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	//time of day
	float SunPitch;
	FDateTime CurrentTime;
	FDateTime RealTime;
	FDateTime RealTimeOld;

	//counter vars
	int32	CurrentSecond	= 1,
			CurrentMinute	= 1,
			CurrentHour		= 1,
			CurrentDay		= 1,
			CurrentMonth	= 1,
			CurrentYear		= 1;

	//weather
	bool bIsWeather = false;
};
