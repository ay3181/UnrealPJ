// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "project1Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROJECT1_project1Projectile_generated_h
#error "project1Projectile.generated.h already included, missing '#pragma once' in project1Projectile.h"
#endif
#define PROJECT1_project1Projectile_generated_h

#define FID_Unreal_UnrealPJ_project1_Source_project1_project1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_UnrealPJ_project1_Source_project1_project1Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAproject1Projectile(); \
	friend struct Z_Construct_UClass_Aproject1Projectile_Statics; \
public: \
	DECLARE_CLASS(Aproject1Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/project1"), NO_API) \
	DECLARE_SERIALIZER(Aproject1Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_UnrealPJ_project1_Source_project1_project1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	Aproject1Projectile(Aproject1Projectile&&); \
	Aproject1Projectile(const Aproject1Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aproject1Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aproject1Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aproject1Projectile) \
	NO_API virtual ~Aproject1Projectile();


#define FID_Unreal_UnrealPJ_project1_Source_project1_project1Projectile_h_12_PROLOG
#define FID_Unreal_UnrealPJ_project1_Source_project1_project1Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_UnrealPJ_project1_Source_project1_project1Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_UnrealPJ_project1_Source_project1_project1Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_UnrealPJ_project1_Source_project1_project1Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT1_API UClass* StaticClass<class Aproject1Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_UnrealPJ_project1_Source_project1_project1Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
