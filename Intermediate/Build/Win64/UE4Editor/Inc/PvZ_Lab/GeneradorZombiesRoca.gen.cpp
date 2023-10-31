// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZ_Lab/GeneradorZombiesRoca.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneradorZombiesRoca() {}
// Cross Module References
	PVZ_LAB_API UClass* Z_Construct_UClass_AGeneradorZombiesRoca_NoRegister();
	PVZ_LAB_API UClass* Z_Construct_UClass_AGeneradorZombiesRoca();
	PVZ_LAB_API UClass* Z_Construct_UClass_AGeneradorZombies();
	UPackage* Z_Construct_UPackage__Script_PvZ_Lab();
// End Cross Module References
	void AGeneradorZombiesRoca::StaticRegisterNativesAGeneradorZombiesRoca()
	{
	}
	UClass* Z_Construct_UClass_AGeneradorZombiesRoca_NoRegister()
	{
		return AGeneradorZombiesRoca::StaticClass();
	}
	struct Z_Construct_UClass_AGeneradorZombiesRoca_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneradorZombiesRoca_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGeneradorZombies,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZ_Lab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorZombiesRoca_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GeneradorZombiesRoca.h" },
		{ "ModuleRelativePath", "GeneradorZombiesRoca.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneradorZombiesRoca_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneradorZombiesRoca>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneradorZombiesRoca_Statics::ClassParams = {
		&AGeneradorZombiesRoca::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGeneradorZombiesRoca_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorZombiesRoca_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneradorZombiesRoca()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneradorZombiesRoca_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneradorZombiesRoca, 2832433329);
	template<> PVZ_LAB_API UClass* StaticClass<AGeneradorZombiesRoca>()
	{
		return AGeneradorZombiesRoca::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneradorZombiesRoca(Z_Construct_UClass_AGeneradorZombiesRoca, &AGeneradorZombiesRoca::StaticClass, TEXT("/Script/PvZ_Lab"), TEXT("AGeneradorZombiesRoca"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneradorZombiesRoca);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
