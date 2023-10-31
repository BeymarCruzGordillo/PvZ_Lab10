// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZ_Lab/Zombies.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombies() {}
// Cross Module References
	PVZ_LAB_API UClass* Z_Construct_UClass_AZombies_NoRegister();
	PVZ_LAB_API UClass* Z_Construct_UClass_AZombies();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PvZ_Lab();
// End Cross Module References
	void AZombies::StaticRegisterNativesAZombies()
	{
	}
	UClass* Z_Construct_UClass_AZombies_NoRegister()
	{
		return AZombies::StaticClass();
	}
	struct Z_Construct_UClass_AZombies_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombies_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZ_Lab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombies_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Zombies.h" },
		{ "ModuleRelativePath", "Zombies.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombies_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombies>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombies_Statics::ClassParams = {
		&AZombies::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombies_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombies_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombies()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombies_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombies, 3981420108);
	template<> PVZ_LAB_API UClass* StaticClass<AZombies>()
	{
		return AZombies::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombies(Z_Construct_UClass_AZombies, &AZombies::StaticClass, TEXT("/Script/PvZ_Lab"), TEXT("AZombies"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombies);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
