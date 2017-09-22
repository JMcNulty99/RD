// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/DirectionalLightComponent.h"
#include "CoreUObject.h"
#include "DayNightDriver.generated.h"

UCLASS()
class RD_API ADayNightDriver : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ADayNightDriver();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sun")
		UDirectionalLightComponent* DynamicSun;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Moon")
		UDirectionalLightComponent* DynamicMoon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sun")
		float SunSpeed;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	float SunPitch;
};
