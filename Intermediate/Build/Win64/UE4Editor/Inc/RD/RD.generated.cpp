// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "RD.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1RD() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_UParticleSystem_NoRegister();

	RD_API class UClass* Z_Construct_UClass_ADayNightDriver_NoRegister();
	RD_API class UClass* Z_Construct_UClass_ADayNightDriver();
	RD_API class UClass* Z_Construct_UClass_ARDGameModeBase_NoRegister();
	RD_API class UClass* Z_Construct_UClass_ARDGameModeBase();
	RD_API class UEnum* Z_Construct_UEnum_RD_WeatherType();
	RD_API class UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentDay();
	RD_API class UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentHour();
	RD_API class UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentMinute();
	RD_API class UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentMonth();
	RD_API class UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentSecond();
	RD_API class UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentTime();
	RD_API class UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentWeather();
	RD_API class UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentWeatherParticle();
	RD_API class UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentWeatherString();
	RD_API class UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentYear();
	RD_API class UFunction* Z_Construct_UFunction_AWeatherDriver_IsWeatherActive();
	RD_API class UFunction* Z_Construct_UFunction_AWeatherDriver_UpdateWeather();
	RD_API class UClass* Z_Construct_UClass_AWeatherDriver_NoRegister();
	RD_API class UClass* Z_Construct_UClass_AWeatherDriver();
	RD_API class UPackage* Z_Construct_UPackage__Script_RD();
	void ADayNightDriver::StaticRegisterNativesADayNightDriver()
	{
	}
	UClass* Z_Construct_UClass_ADayNightDriver_NoRegister()
	{
		return ADayNightDriver::StaticClass();
	}
	UClass* Z_Construct_UClass_ADayNightDriver()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_RD();
			OuterClass = ADayNightDriver::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_SunSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SunSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SunSpeed, ADayNightDriver), 0x0010000000000005);
				UProperty* NewProp_DynamicMoon = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DynamicMoon"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DynamicMoon, ADayNightDriver), 0x001000000008000d, Z_Construct_UClass_UDirectionalLightComponent_NoRegister());
				UProperty* NewProp_DynamicSun = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DynamicSun"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DynamicSun, ADayNightDriver), 0x001000000008000d, Z_Construct_UClass_UDirectionalLightComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ADayNightDriver> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Jacob/DayNightDriver.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Jacob/DayNightDriver.h"));
				MetaData->SetValue(NewProp_SunSpeed, TEXT("Category"), TEXT("Sun"));
				MetaData->SetValue(NewProp_SunSpeed, TEXT("ModuleRelativePath"), TEXT("Jacob/DayNightDriver.h"));
				MetaData->SetValue(NewProp_DynamicMoon, TEXT("Category"), TEXT("Moon"));
				MetaData->SetValue(NewProp_DynamicMoon, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_DynamicMoon, TEXT("ModuleRelativePath"), TEXT("Jacob/DayNightDriver.h"));
				MetaData->SetValue(NewProp_DynamicSun, TEXT("Category"), TEXT("Sun"));
				MetaData->SetValue(NewProp_DynamicSun, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_DynamicSun, TEXT("ModuleRelativePath"), TEXT("Jacob/DayNightDriver.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADayNightDriver, 2545123033);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADayNightDriver(Z_Construct_UClass_ADayNightDriver, &ADayNightDriver::StaticClass, TEXT("/Script/RD"), TEXT("ADayNightDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADayNightDriver);
	void ARDGameModeBase::StaticRegisterNativesARDGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARDGameModeBase_NoRegister()
	{
		return ARDGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ARDGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_RD();
			OuterClass = ARDGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ARDGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("RDGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("RDGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARDGameModeBase, 3240763428);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARDGameModeBase(Z_Construct_UClass_ARDGameModeBase, &ARDGameModeBase::StaticClass, TEXT("/Script/RD"), TEXT("ARDGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARDGameModeBase);
static UEnum* WeatherType_StaticEnum()
{
	extern RD_API class UPackage* Z_Construct_UPackage__Script_RD();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern RD_API class UEnum* Z_Construct_UEnum_RD_WeatherType();
		Singleton = GetStaticEnum(Z_Construct_UEnum_RD_WeatherType, Z_Construct_UPackage__Script_RD(), TEXT("WeatherType"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_WeatherType(WeatherType_StaticEnum, TEXT("/Script/RD"), TEXT("WeatherType"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_RD_WeatherType()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_RD();
		extern uint32 Get_Z_Construct_UEnum_RD_WeatherType_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("WeatherType"), 0, Get_Z_Construct_UEnum_RD_WeatherType_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WeatherType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("WeatherType::Sun"), 0);
			EnumNames.Emplace(TEXT("WeatherType::Rain"), 1);
			EnumNames.Emplace(TEXT("WeatherType::Snow"), 2);
			EnumNames.Emplace(TEXT("WeatherType::WeatherType_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("WeatherType");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Category"), TEXT("Weather"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
			MetaData->SetValue(ReturnEnum, TEXT("Rain.DisplayName"), TEXT("Rain"));
			MetaData->SetValue(ReturnEnum, TEXT("Snow.DisplayName"), TEXT("Snow"));
			MetaData->SetValue(ReturnEnum, TEXT("Sun.DisplayName"), TEXT("Sun"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_RD_WeatherType_CRC() { return 3626117674U; }
	void AWeatherDriver::StaticRegisterNativesAWeatherDriver()
	{
		UClass* Class = AWeatherDriver::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetCurrentDay", (Native)&AWeatherDriver::execGetCurrentDay },
			{ "GetCurrentHour", (Native)&AWeatherDriver::execGetCurrentHour },
			{ "GetCurrentMinute", (Native)&AWeatherDriver::execGetCurrentMinute },
			{ "GetCurrentMonth", (Native)&AWeatherDriver::execGetCurrentMonth },
			{ "GetCurrentSecond", (Native)&AWeatherDriver::execGetCurrentSecond },
			{ "GetCurrentTime", (Native)&AWeatherDriver::execGetCurrentTime },
			{ "GetCurrentWeather", (Native)&AWeatherDriver::execGetCurrentWeather },
			{ "GetCurrentWeatherParticle", (Native)&AWeatherDriver::execGetCurrentWeatherParticle },
			{ "GetCurrentWeatherString", (Native)&AWeatherDriver::execGetCurrentWeatherString },
			{ "GetCurrentYear", (Native)&AWeatherDriver::execGetCurrentYear },
			{ "IsWeatherActive", (Native)&AWeatherDriver::execIsWeatherActive },
			{ "UpdateWeather", (Native)&AWeatherDriver::execUpdateWeather },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 12);
	}
	UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentDay()
	{
		struct WeatherDriver_eventGetCurrentDay_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWeatherDriver();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentDay"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WeatherDriver_eventGetCurrentDay_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, WeatherDriver_eventGetCurrentDay_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentHour()
	{
		struct WeatherDriver_eventGetCurrentHour_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWeatherDriver();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentHour"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WeatherDriver_eventGetCurrentHour_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, WeatherDriver_eventGetCurrentHour_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentMinute()
	{
		struct WeatherDriver_eventGetCurrentMinute_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWeatherDriver();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentMinute"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WeatherDriver_eventGetCurrentMinute_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, WeatherDriver_eventGetCurrentMinute_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentMonth()
	{
		struct WeatherDriver_eventGetCurrentMonth_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWeatherDriver();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentMonth"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WeatherDriver_eventGetCurrentMonth_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, WeatherDriver_eventGetCurrentMonth_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentSecond()
	{
		struct WeatherDriver_eventGetCurrentSecond_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWeatherDriver();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentSecond"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WeatherDriver_eventGetCurrentSecond_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, WeatherDriver_eventGetCurrentSecond_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentTime()
	{
		struct WeatherDriver_eventGetCurrentTime_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWeatherDriver();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WeatherDriver_eventGetCurrentTime_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, WeatherDriver_eventGetCurrentTime_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("FString"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentWeather()
	{
		struct WeatherDriver_eventGetCurrentWeather_Parms
		{
			WeatherType ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWeatherDriver();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentWeather"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WeatherDriver_eventGetCurrentWeather_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, WeatherDriver_eventGetCurrentWeather_Parms), 0x0010000000000580, Z_Construct_UEnum_RD_WeatherType());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentWeatherParticle()
	{
		struct WeatherDriver_eventGetCurrentWeatherParticle_Parms
		{
			UParticleSystem* ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWeatherDriver();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentWeatherParticle"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WeatherDriver_eventGetCurrentWeatherParticle_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, WeatherDriver_eventGetCurrentWeatherParticle_Parms), 0x0010000000000580, Z_Construct_UClass_UParticleSystem_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentWeatherString()
	{
		struct WeatherDriver_eventGetCurrentWeatherString_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWeatherDriver();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentWeatherString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WeatherDriver_eventGetCurrentWeatherString_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, WeatherDriver_eventGetCurrentWeatherString_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWeatherDriver_GetCurrentYear()
	{
		struct WeatherDriver_eventGetCurrentYear_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWeatherDriver();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentYear"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WeatherDriver_eventGetCurrentYear_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, WeatherDriver_eventGetCurrentYear_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("functions\nint"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWeatherDriver_IsWeatherActive()
	{
		struct WeatherDriver_eventIsWeatherActive_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_AWeatherDriver();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsWeatherActive"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WeatherDriver_eventIsWeatherActive_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, WeatherDriver_eventIsWeatherActive_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, WeatherDriver_eventIsWeatherActive_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, WeatherDriver_eventIsWeatherActive_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("functions"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AWeatherDriver_UpdateWeather()
	{
		struct WeatherDriver_eventUpdateWeather_Parms
		{
			int32 Day;
		};
		UObject* Outer=Z_Construct_UClass_AWeatherDriver();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdateWeather"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(WeatherDriver_eventUpdateWeather_Parms));
			UProperty* NewProp_Day = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Day"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(Day, WeatherDriver_eventUpdateWeather_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeatherDriver_NoRegister()
	{
		return AWeatherDriver::StaticClass();
	}
	UClass* Z_Construct_UClass_AWeatherDriver()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_RD();
			OuterClass = AWeatherDriver::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AWeatherDriver_GetCurrentDay());
				OuterClass->LinkChild(Z_Construct_UFunction_AWeatherDriver_GetCurrentHour());
				OuterClass->LinkChild(Z_Construct_UFunction_AWeatherDriver_GetCurrentMinute());
				OuterClass->LinkChild(Z_Construct_UFunction_AWeatherDriver_GetCurrentMonth());
				OuterClass->LinkChild(Z_Construct_UFunction_AWeatherDriver_GetCurrentSecond());
				OuterClass->LinkChild(Z_Construct_UFunction_AWeatherDriver_GetCurrentTime());
				OuterClass->LinkChild(Z_Construct_UFunction_AWeatherDriver_GetCurrentWeather());
				OuterClass->LinkChild(Z_Construct_UFunction_AWeatherDriver_GetCurrentWeatherParticle());
				OuterClass->LinkChild(Z_Construct_UFunction_AWeatherDriver_GetCurrentWeatherString());
				OuterClass->LinkChild(Z_Construct_UFunction_AWeatherDriver_GetCurrentYear());
				OuterClass->LinkChild(Z_Construct_UFunction_AWeatherDriver_IsWeatherActive());
				OuterClass->LinkChild(Z_Construct_UFunction_AWeatherDriver_UpdateWeather());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_SnowParticle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SnowParticle"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SnowParticle, AWeatherDriver), 0x0010000000000001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_RainParticle = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RainParticle"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RainParticle, AWeatherDriver), 0x0010000000000001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_CurrentWeather = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentWeather"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(CurrentWeather, AWeatherDriver), 0x0010000000000000, Z_Construct_UEnum_RD_WeatherType());
				UProperty* NewProp_CurrentWeather_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_CurrentWeather, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_CurrentTemp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentTemp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CurrentTemp, AWeatherDriver), 0x0010000000000001);
				UProperty* NewProp_CustomTimeYear = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CustomTimeYear"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(CustomTimeYear, AWeatherDriver), 0x0010000000000001);
				UProperty* NewProp_CustomTimeMonth = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CustomTimeMonth"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(CustomTimeMonth, AWeatherDriver), 0x0010000000000001);
				UProperty* NewProp_CustomTimeDay = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CustomTimeDay"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(CustomTimeDay, AWeatherDriver), 0x0010000000000001);
				UProperty* NewProp_CustomTimeHour = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CustomTimeHour"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(CustomTimeHour, AWeatherDriver), 0x0010000000000001);
				UProperty* NewProp_CustomTimeMinute = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CustomTimeMinute"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(CustomTimeMinute, AWeatherDriver), 0x0010000000000001);
				UProperty* NewProp_CustomTimeSecond = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CustomTimeSecond"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(CustomTimeSecond, AWeatherDriver), 0x0010000000000001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseCustomTime, AWeatherDriver, bool);
				UProperty* NewProp_bUseCustomTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseCustomTime"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseCustomTime, AWeatherDriver), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseCustomTime, AWeatherDriver), sizeof(bool), true);
				UProperty* NewProp_TimeZone = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TimeZone"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(TimeZone, AWeatherDriver), 0x0010000000000001);
				UProperty* NewProp_SunSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SunSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SunSpeed, AWeatherDriver), 0x0010000000000005);
				UProperty* NewProp_DynamicMoon = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DynamicMoon"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DynamicMoon, AWeatherDriver), 0x001000000008000d, Z_Construct_UClass_UDirectionalLightComponent_NoRegister());
				UProperty* NewProp_DynamicSun = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DynamicSun"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DynamicSun, AWeatherDriver), 0x001000000008000d, Z_Construct_UClass_UDirectionalLightComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeatherDriver_GetCurrentDay(), "GetCurrentDay"); // 3043877823
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeatherDriver_GetCurrentHour(), "GetCurrentHour"); // 2073037406
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeatherDriver_GetCurrentMinute(), "GetCurrentMinute"); // 649594769
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeatherDriver_GetCurrentMonth(), "GetCurrentMonth"); // 1904314108
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeatherDriver_GetCurrentSecond(), "GetCurrentSecond"); // 1861245076
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeatherDriver_GetCurrentTime(), "GetCurrentTime"); // 1939770330
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeatherDriver_GetCurrentWeather(), "GetCurrentWeather"); // 633249622
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeatherDriver_GetCurrentWeatherParticle(), "GetCurrentWeatherParticle"); // 4253784975
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeatherDriver_GetCurrentWeatherString(), "GetCurrentWeatherString"); // 3825173627
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeatherDriver_GetCurrentYear(), "GetCurrentYear"); // 2609288757
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeatherDriver_IsWeatherActive(), "IsWeatherActive"); // 4003151043
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AWeatherDriver_UpdateWeather(), "UpdateWeather"); // 837298388
				static TCppClassTypeInfo<TCppClassTypeTraits<AWeatherDriver> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_SnowParticle, TEXT("Category"), TEXT("Weather"));
				MetaData->SetValue(NewProp_SnowParticle, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_RainParticle, TEXT("Category"), TEXT("Weather"));
				MetaData->SetValue(NewProp_RainParticle, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_CurrentWeather, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_CurrentTemp, TEXT("Category"), TEXT("Weather"));
				MetaData->SetValue(NewProp_CurrentTemp, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_CurrentTemp, TEXT("ToolTip"), TEXT("variables"));
				MetaData->SetValue(NewProp_CustomTimeYear, TEXT("Category"), TEXT("Time"));
				MetaData->SetValue(NewProp_CustomTimeYear, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_CustomTimeMonth, TEXT("Category"), TEXT("Time"));
				MetaData->SetValue(NewProp_CustomTimeMonth, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_CustomTimeDay, TEXT("Category"), TEXT("Time"));
				MetaData->SetValue(NewProp_CustomTimeDay, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_CustomTimeHour, TEXT("Category"), TEXT("Time"));
				MetaData->SetValue(NewProp_CustomTimeHour, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_CustomTimeMinute, TEXT("Category"), TEXT("Time"));
				MetaData->SetValue(NewProp_CustomTimeMinute, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_CustomTimeSecond, TEXT("Category"), TEXT("Time"));
				MetaData->SetValue(NewProp_CustomTimeSecond, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_bUseCustomTime, TEXT("Category"), TEXT("Time"));
				MetaData->SetValue(NewProp_bUseCustomTime, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_TimeZone, TEXT("Category"), TEXT("Time"));
				MetaData->SetValue(NewProp_TimeZone, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_SunSpeed, TEXT("Category"), TEXT("Sun"));
				MetaData->SetValue(NewProp_SunSpeed, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_DynamicMoon, TEXT("Category"), TEXT("Moon"));
				MetaData->SetValue(NewProp_DynamicMoon, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_DynamicMoon, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_DynamicSun, TEXT("Category"), TEXT("Sun"));
				MetaData->SetValue(NewProp_DynamicSun, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_DynamicSun, TEXT("ModuleRelativePath"), TEXT("Jacob/WeatherDriver.h"));
				MetaData->SetValue(NewProp_DynamicSun, TEXT("ToolTip"), TEXT("variables"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeatherDriver, 2507751705);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeatherDriver(Z_Construct_UClass_AWeatherDriver, &AWeatherDriver::StaticClass, TEXT("/Script/RD"), TEXT("AWeatherDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeatherDriver);
	UPackage* Z_Construct_UPackage__Script_RD()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/RD")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x10B2E4E7;
			Guid.B = 0xCFC1E6BA;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
