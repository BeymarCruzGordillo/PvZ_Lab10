// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZ_Lab/PvZ_LabGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePvZ_LabGameMode() {}
// Cross Module References
	PVZ_LAB_API UClass* Z_Construct_UClass_APvZ_LabGameMode_NoRegister();
	PVZ_LAB_API UClass* Z_Construct_UClass_APvZ_LabGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PvZ_Lab();
// End Cross Module References
	void APvZ_LabGameMode::StaticRegisterNativesAPvZ_LabGameMode()
	{
	}
	UClass* Z_Construct_UClass_APvZ_LabGameMode_NoRegister()
	{
		return APvZ_LabGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APvZ_LabGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APvZ_LabGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZ_Lab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APvZ_LabGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PvZ_LabGameMode.h" },
		{ "ModuleRelativePath", "PvZ_LabGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APvZ_LabGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APvZ_LabGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APvZ_LabGameMode_Statics::ClassParams = {
		&APvZ_LabGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APvZ_LabGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APvZ_LabGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APvZ_LabGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APvZ_LabGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APvZ_LabGameMode, 1487744592);
	template<> PVZ_LAB_API UClass* StaticClass<APvZ_LabGameMode>()
	{
		return APvZ_LabGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APvZ_LabGameMode(Z_Construct_UClass_APvZ_LabGameMode, &APvZ_LabGameMode::StaticClass, TEXT("/Script/PvZ_Lab"), TEXT("APvZ_LabGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APvZ_LabGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
