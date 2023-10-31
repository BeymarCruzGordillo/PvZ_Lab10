// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PVZ_LAB_PvZ_LabProjectile_generated_h
#error "PvZ_LabProjectile.generated.h already included, missing '#pragma once' in PvZ_LabProjectile.h"
#endif
#define PVZ_LAB_PvZ_LabProjectile_generated_h

#define PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_SPARSE_DATA
#define PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPvZ_LabProjectile(); \
	friend struct Z_Construct_UClass_APvZ_LabProjectile_Statics; \
public: \
	DECLARE_CLASS(APvZ_LabProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PvZ_Lab"), NO_API) \
	DECLARE_SERIALIZER(APvZ_LabProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPvZ_LabProjectile(); \
	friend struct Z_Construct_UClass_APvZ_LabProjectile_Statics; \
public: \
	DECLARE_CLASS(APvZ_LabProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PvZ_Lab"), NO_API) \
	DECLARE_SERIALIZER(APvZ_LabProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APvZ_LabProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APvZ_LabProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APvZ_LabProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APvZ_LabProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APvZ_LabProjectile(APvZ_LabProjectile&&); \
	NO_API APvZ_LabProjectile(const APvZ_LabProjectile&); \
public:


#define PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APvZ_LabProjectile(APvZ_LabProjectile&&); \
	NO_API APvZ_LabProjectile(const APvZ_LabProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APvZ_LabProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APvZ_LabProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APvZ_LabProjectile)


#define PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(APvZ_LabProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APvZ_LabProjectile, ProjectileMovement); }


#define PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_12_PROLOG
#define PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_SPARSE_DATA \
	PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_RPC_WRAPPERS \
	PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_INCLASS \
	PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_SPARSE_DATA \
	PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_INCLASS_NO_PURE_DECLS \
	PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_LAB_API UClass* StaticClass<class APvZ_LabProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PvZ_Lab_Source_PvZ_Lab_PvZ_LabProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
