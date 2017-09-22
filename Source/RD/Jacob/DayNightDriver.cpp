// Fill out your copyright notice in the Description page of Project Settings.

#include "DayNightDriver.h"


// Sets default values
ADayNightDriver::ADayNightDriver()
{
 	
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	USceneComponent* Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = Root;

	DynamicSun = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("SunLight"));
	DynamicMoon = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("MoonLight"));

	DynamicSun->AttachTo(RootComponent);
	DynamicMoon->AttachTo(RootComponent);
}

// Called when the game starts or when spawned
void ADayNightDriver::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADayNightDriver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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
}