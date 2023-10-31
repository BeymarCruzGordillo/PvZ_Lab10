// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PvZ_Lab/ZombieRocaFuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieRocaFuego() {}
// Cross Module References
	PVZ_LAB_API UClass* Z_Construct_UClass_AZombieRocaFuego_NoRegister();
	PVZ_LAB_API UClass* Z_Construct_UClass_AZombieRocaFuego();
	PVZ_LAB_API UClass* Z_Construct_UClass_AZombies();
	UPackage* Z_Construct_UPackage__Script_PvZ_Lab();
// End Cross Module References
	void AZombieRocaFuego::StaticRegisterNativesAZombieRocaFuego()
	{
	}
	UClass* Z_Construct_UClass_AZombieRocaFuego_NoRegister()
	{
		return AZombieRocaFuego::StaticClass();
	}
	struct Z_Construct_UClass_AZombieRocaFuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieRocaFuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZombies,
		(UObject* (*)())Z_Construct_UPackage__Script_PvZ_Lab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieRocaFuego_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ZombieRocaFuego.h" },
		{ "ModuleRelativePath", "ZombieRocaFuego.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieRocaFuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieRocaFuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieRocaFuego_Statics::ClassParams = {
		&AZombieRocaFuego::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZombieRocaFuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieRocaFuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieRocaFuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieRocaFuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieRocaFuego, 3444245388);
	template<> PVZ_LAB_API UClass* StaticClass<AZombieRocaFuego>()
	{
		return AZombieRocaFuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieRocaFuego(Z_Construct_UClass_AZombieRocaFuego, &AZombieRocaFuego::StaticClass, TEXT("/Script/PvZ_Lab"), TEXT("AZombieRocaFuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieRocaFuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
