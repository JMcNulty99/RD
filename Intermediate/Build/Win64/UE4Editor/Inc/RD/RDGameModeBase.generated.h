// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RD_RDGameModeBase_generated_h
#error "RDGameModeBase.generated.h already included, missing '#pragma once' in RDGameModeBase.h"
#endif
#define RD_RDGameModeBase_generated_h

#define RD_Source_RD_RDGameModeBase_h_15_RPC_WRAPPERS
#define RD_Source_RD_RDGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define RD_Source_RD_RDGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARDGameModeBase(); \
	friend RD_API class UClass* Z_Construct_UClass_ARDGameModeBase(); \
public: \
	DECLARE_CLASS(ARDGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/RD"), NO_API) \
	DECLARE_SERIALIZER(ARDGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RD_Source_RD_RDGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARDGameModeBase(); \
	friend RD_API class UClass* Z_Construct_UClass_ARDGameModeBase(); \
public: \
	DECLARE_CLASS(ARDGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/RD"), NO_API) \
	DECLARE_SERIALIZER(ARDGameModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define RD_Source_RD_RDGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARDGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARDGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARDGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARDGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARDGameModeBase(ARDGameModeBase&&); \
	NO_API ARDGameModeBase(const ARDGameModeBase&); \
public:


#define RD_Source_RD_RDGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARDGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARDGameModeBase(ARDGameModeBase&&); \
	NO_API ARDGameModeBase(const ARDGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARDGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARDGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARDGameModeBase)


#define RD_Source_RD_RDGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define RD_Source_RD_RDGameModeBase_h_12_PROLOG
#define RD_Source_RD_RDGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RD_Source_RD_RDGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	RD_Source_RD_RDGameModeBase_h_15_RPC_WRAPPERS \
	RD_Source_RD_RDGameModeBase_h_15_INCLASS \
	RD_Source_RD_RDGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RD_Source_RD_RDGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RD_Source_RD_RDGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	RD_Source_RD_RDGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RD_Source_RD_RDGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	RD_Source_RD_RDGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RD_Source_RD_RDGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
