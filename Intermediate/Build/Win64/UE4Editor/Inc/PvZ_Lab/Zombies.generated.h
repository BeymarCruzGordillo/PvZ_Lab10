// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PVZ_LAB_Zombies_generated_h
#error "Zombies.generated.h already included, missing '#pragma once' in Zombies.h"
#endif
#define PVZ_LAB_Zombies_generated_h

#define PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_SPARSE_DATA
#define PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_RPC_WRAPPERS
#define PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombies(); \
	friend struct Z_Construct_UClass_AZombies_Statics; \
public: \
	DECLARE_CLASS(AZombies, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PvZ_Lab"), NO_API) \
	DECLARE_SERIALIZER(AZombies)


#define PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAZombies(); \
	friend struct Z_Construct_UClass_AZombies_Statics; \
public: \
	DECLARE_CLASS(AZombies, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PvZ_Lab"), NO_API) \
	DECLARE_SERIALIZER(AZombies)


#define PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombies(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombies) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombies); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombies); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombies(AZombies&&); \
	NO_API AZombies(const AZombies&); \
public:


#define PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombies(AZombies&&); \
	NO_API AZombies(const AZombies&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombies); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombies); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombies)


#define PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_PRIVATE_PROPERTY_OFFSET
#define PvZ_Lab_Source_PvZ_Lab_Zombies_h_9_PROLOG
#define PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_PRIVATE_PROPERTY_OFFSET \
	PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_SPARSE_DATA \
	PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_RPC_WRAPPERS \
	PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_INCLASS \
	PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_PRIVATE_PROPERTY_OFFSET \
	PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_SPARSE_DATA \
	PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_INCLASS_NO_PURE_DECLS \
	PvZ_Lab_Source_PvZ_Lab_Zombies_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_LAB_API UClass* StaticClass<class AZombies>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PvZ_Lab_Source_PvZ_Lab_Zombies_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
