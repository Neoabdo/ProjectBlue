// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTBLUE_ProjectBlueCharacter_generated_h
#error "ProjectBlueCharacter.generated.h already included, missing '#pragma once' in ProjectBlueCharacter.h"
#endif
#define PROJECTBLUE_ProjectBlueCharacter_generated_h

#define ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_RPC_WRAPPERS
#define ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectBlueCharacter(); \
	friend struct Z_Construct_UClass_AProjectBlueCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectBlueCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectBlue"), NO_API) \
	DECLARE_SERIALIZER(AProjectBlueCharacter)


#define ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectBlueCharacter(); \
	friend struct Z_Construct_UClass_AProjectBlueCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectBlueCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectBlue"), NO_API) \
	DECLARE_SERIALIZER(AProjectBlueCharacter)


#define ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectBlueCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectBlueCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectBlueCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectBlueCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectBlueCharacter(AProjectBlueCharacter&&); \
	NO_API AProjectBlueCharacter(const AProjectBlueCharacter&); \
public:


#define ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectBlueCharacter(AProjectBlueCharacter&&); \
	NO_API AProjectBlueCharacter(const AProjectBlueCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectBlueCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectBlueCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectBlueCharacter)


#define ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AProjectBlueCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AProjectBlueCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AProjectBlueCharacter, CursorToWorld); }


#define ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_9_PROLOG
#define ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_RPC_WRAPPERS \
	ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_INCLASS \
	ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTBLUE_API UClass* StaticClass<class AProjectBlueCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectBlue_Source_ProjectBlue_ProjectBlueCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
