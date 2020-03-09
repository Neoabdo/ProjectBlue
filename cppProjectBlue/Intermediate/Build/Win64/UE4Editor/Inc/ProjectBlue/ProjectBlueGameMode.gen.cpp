// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectBlue/ProjectBlueGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectBlueGameMode() {}
// Cross Module References
	PROJECTBLUE_API UClass* Z_Construct_UClass_AProjectBlueGameMode_NoRegister();
	PROJECTBLUE_API UClass* Z_Construct_UClass_AProjectBlueGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjectBlue();
// End Cross Module References
	void AProjectBlueGameMode::StaticRegisterNativesAProjectBlueGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProjectBlueGameMode_NoRegister()
	{
		return AProjectBlueGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProjectBlueGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectBlueGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectBlue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectBlueGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProjectBlueGameMode.h" },
		{ "ModuleRelativePath", "ProjectBlueGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectBlueGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectBlueGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectBlueGameMode_Statics::ClassParams = {
		&AProjectBlueGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectBlueGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProjectBlueGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectBlueGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectBlueGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectBlueGameMode, 3741920984);
	template<> PROJECTBLUE_API UClass* StaticClass<AProjectBlueGameMode>()
	{
		return AProjectBlueGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectBlueGameMode(Z_Construct_UClass_AProjectBlueGameMode, &AProjectBlueGameMode::StaticClass, TEXT("/Script/ProjectBlue"), TEXT("AProjectBlueGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectBlueGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
