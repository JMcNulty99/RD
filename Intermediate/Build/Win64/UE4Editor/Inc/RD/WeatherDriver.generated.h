// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystem;
enum class WeatherType : uint8;
#ifdef RD_WeatherDriver_generated_h
#error "WeatherDriver.generated.h already included, missing '#pragma once' in WeatherDriver.h"
#endif
#define RD_WeatherDriver_generated_h

#define RD_Source_RD_Jacob_WeatherDriver_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentWeatherParticle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=this->GetCurrentWeatherParticle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateWeather) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Day); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateWeather(Z_Param_Day); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWeather) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(WeatherType*)Z_Param__Result=this->GetCurrentWeather(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWeatherString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetCurrentWeatherString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWeatherActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsWeatherActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetCurrentTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSecond) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetCurrentSecond(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMinute) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetCurrentMinute(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHour) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetCurrentHour(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetCurrentDay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMonth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetCurrentMonth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentYear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetCurrentYear(); \
		P_NATIVE_END; \
	}


#define RD_Source_RD_Jacob_WeatherDriver_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentWeatherParticle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UParticleSystem**)Z_Param__Result=this->GetCurrentWeatherParticle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateWeather) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Day); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateWeather(Z_Param_Day); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWeather) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(WeatherType*)Z_Param__Result=this->GetCurrentWeather(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWeatherString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetCurrentWeatherString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWeatherActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsWeatherActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetCurrentTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentSecond) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetCurrentSecond(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMinute) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetCurrentMinute(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentHour) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetCurrentHour(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetCurrentDay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMonth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetCurrentMonth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentYear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetCurrentYear(); \
		P_NATIVE_END; \
	}


#define RD_Source_RD_Jacob_WeatherDriver_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeatherDriver(); \
	friend RD_API class UClass* Z_Construct_UClass_AWeatherDriver(); \
public: \
	DECLARE_CLASS(AWeatherDriver, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RD"), NO_API) \
	DECLARE_SERIALIZER(AWeatherDriver) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RD_Source_RD_Jacob_WeatherDriver_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAWeatherDriver(); \
	friend RD_API class UClass* Z_Construct_UClass_AWeatherDriver(); \
public: \
	DECLARE_CLASS(AWeatherDriver, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RD"), NO_API) \
	DECLARE_SERIALIZER(AWeatherDriver) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RD_Source_RD_Jacob_WeatherDriver_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeatherDriver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeatherDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeatherDriver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeatherDriver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeatherDriver(AWeatherDriver&&); \
	NO_API AWeatherDriver(const AWeatherDriver&); \
public:


#define RD_Source_RD_Jacob_WeatherDriver_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeatherDriver(AWeatherDriver&&); \
	NO_API AWeatherDriver(const AWeatherDriver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeatherDriver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeatherDriver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeatherDriver)


#define RD_Source_RD_Jacob_WeatherDriver_h_26_PRIVATE_PROPERTY_OFFSET
#define RD_Source_RD_Jacob_WeatherDriver_h_23_PROLOG
#define RD_Source_RD_Jacob_WeatherDriver_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RD_Source_RD_Jacob_WeatherDriver_h_26_PRIVATE_PROPERTY_OFFSET \
	RD_Source_RD_Jacob_WeatherDriver_h_26_RPC_WRAPPERS \
	RD_Source_RD_Jacob_WeatherDriver_h_26_INCLASS \
	RD_Source_RD_Jacob_WeatherDriver_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RD_Source_RD_Jacob_WeatherDriver_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RD_Source_RD_Jacob_WeatherDriver_h_26_PRIVATE_PROPERTY_OFFSET \
	RD_Source_RD_Jacob_WeatherDriver_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	RD_Source_RD_Jacob_WeatherDriver_h_26_INCLASS_NO_PURE_DECLS \
	RD_Source_RD_Jacob_WeatherDriver_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RD_Source_RD_Jacob_WeatherDriver_h


#define FOREACH_ENUM_WEATHERTYPE(op) \
	op(WeatherType::Sun) \
	op(WeatherType::Rain) \
	op(WeatherType::Snow) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
