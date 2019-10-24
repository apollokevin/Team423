// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
#ifdef FAKEWATCHPROJECT_FakeWatchProjectProjectile_generated_h
#error "FakeWatchProjectProjectile.generated.h already included, missing '#pragma once' in FakeWatchProjectProjectile.h"
#endif
#define FAKEWATCHPROJECT_FakeWatchProjectProjectile_generated_h

#define FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFakeWatchProjectProjectile(); \
	friend struct Z_Construct_UClass_AFakeWatchProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AFakeWatchProjectProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FakeWatchProject"), NO_API) \
	DECLARE_SERIALIZER(AFakeWatchProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFakeWatchProjectProjectile(); \
	friend struct Z_Construct_UClass_AFakeWatchProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AFakeWatchProjectProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FakeWatchProject"), NO_API) \
	DECLARE_SERIALIZER(AFakeWatchProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFakeWatchProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFakeWatchProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFakeWatchProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFakeWatchProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFakeWatchProjectProjectile(AFakeWatchProjectProjectile&&); \
	NO_API AFakeWatchProjectProjectile(const AFakeWatchProjectProjectile&); \
public:


#define FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFakeWatchProjectProjectile(AFakeWatchProjectProjectile&&); \
	NO_API AFakeWatchProjectProjectile(const AFakeWatchProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFakeWatchProjectProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFakeWatchProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFakeWatchProjectProjectile)


#define FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFakeWatchProjectProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFakeWatchProjectProjectile, ProjectileMovement); }


#define FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_9_PROLOG
#define FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_RPC_WRAPPERS \
	FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_INCLASS \
	FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_INCLASS_NO_PURE_DECLS \
	FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FAKEWATCHPROJECT_API UClass* StaticClass<class AFakeWatchProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FakeWatchProject_Source_FakeWatchProject_FakeWatchProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
