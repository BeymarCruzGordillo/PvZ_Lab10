// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZ_Lab/ZombieRocaGrande.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieRocaGrande() {}
// Cross Module References
	PVZ_LAB_API UClass* Z_Construct_UClass_AZombieRocaGrande_NoRegister();
	PVZ_LAB_API UClass* Z_Construct_UClass_AZombieRocaGrande();
	PVZ_LAB_API UClass* Z_Construct_UClass_AZombies();
	UPackage* Z_Construct_UPackage__Script_PvZ_Lab();
// End Cross Module References
	void AZombieRocaGrande::StaticRegisterNativesAZombieRocaGrande()
	{
	}
	UClass* Z_Construct_UClass_AZombieRocaGrande_NoRegister()
	{
		return AZombieRocaGrande::StaticClass();
	}
	struct Z_Construct_UClass_AZombieRocaGrande_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieRocaGrande_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZombies,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZ_Lab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieRocaGrande_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ZombieRocaGrande.h" },
		{ "ModuleRelativePath", "ZombieRocaGrande.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieRocaGrande_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieRocaGrande>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieRocaGrande_Statics::ClassParams = {
		&AZombieRocaGrande::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZombieRocaGrande_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieRocaGrande_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieRocaGrande()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieRocaGrande_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieRocaGrande, 1695121832);
	template<> PVZ_LAB_API UClass* StaticClass<AZombieRocaGrande>()
	{
		return AZombieRocaGrande::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieRocaGrande(Z_Construct_UClass_AZombieRocaGrande, &AZombieRocaGrande::StaticClass, TEXT("/Script/PvZ_Lab"), TEXT("AZombieRocaGrande"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieRocaGrande);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
