// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZ_Lab/GeneradorZombieEsqueleto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneradorZombieEsqueleto() {}
// Cross Module References
	PVZ_LAB_API UClass* Z_Construct_UClass_AGeneradorZombieEsqueleto_NoRegister();
	PVZ_LAB_API UClass* Z_Construct_UClass_AGeneradorZombieEsqueleto();
	PVZ_LAB_API UClass* Z_Construct_UClass_AGeneradorZombies();
	UPackage* Z_Construct_UPackage__Script_PvZ_Lab();
// End Cross Module References
	void AGeneradorZombieEsqueleto::StaticRegisterNativesAGeneradorZombieEsqueleto()
	{
	}
	UClass* Z_Construct_UClass_AGeneradorZombieEsqueleto_NoRegister()
	{
		return AGeneradorZombieEsqueleto::StaticClass();
	}
	struct Z_Construct_UClass_AGeneradorZombieEsqueleto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneradorZombieEsqueleto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGeneradorZombies,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZ_Lab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorZombieEsqueleto_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GeneradorZombieEsqueleto.h" },
		{ "ModuleRelativePath", "GeneradorZombieEsqueleto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneradorZombieEsqueleto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneradorZombieEsqueleto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneradorZombieEsqueleto_Statics::ClassParams = {
		&AGeneradorZombieEsqueleto::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGeneradorZombieEsqueleto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorZombieEsqueleto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneradorZombieEsqueleto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneradorZombieEsqueleto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneradorZombieEsqueleto, 2327977039);
	template<> PVZ_LAB_API UClass* StaticClass<AGeneradorZombieEsqueleto>()
	{
		return AGeneradorZombieEsqueleto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneradorZombieEsqueleto(Z_Construct_UClass_AGeneradorZombieEsqueleto, &AGeneradorZombieEsqueleto::StaticClass, TEXT("/Script/PvZ_Lab"), TEXT("AGeneradorZombieEsqueleto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneradorZombieEsqueleto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
