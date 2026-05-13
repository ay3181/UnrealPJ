// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "project1WeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class Aproject1Character;
#ifdef PROJECT1_project1WeaponComponent_generated_h
#error "project1WeaponComponent.generated.h already included, missing '#pragma once' in project1WeaponComponent.h"
#endif
#define PROJECT1_project1WeaponComponent_generated_h

#define FID_Unreal_UnrealPJ_project1_Source_project1_project1WeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Unreal_UnrealPJ_project1_Source_project1_project1WeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUproject1WeaponComponent(); \
	friend struct Z_Construct_UClass_Uproject1WeaponComponent_Statics; \
public: \
	DECLARE_CLASS(Uproject1WeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/project1"), NO_API) \
	DECLARE_SERIALIZER(Uproject1WeaponComponent)


#define FID_Unreal_UnrealPJ_project1_Source_project1_project1WeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	Uproject1WeaponComponent(Uproject1WeaponComponent&&); \
	Uproject1WeaponComponent(const Uproject1WeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Uproject1WeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Uproject1WeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Uproject1WeaponComponent) \
	NO_API virtual ~Uproject1WeaponComponent();


#define FID_Unreal_UnrealPJ_project1_Source_project1_project1WeaponComponent_h_11_PROLOG
#define FID_Unreal_UnrealPJ_project1_Source_project1_project1WeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_UnrealPJ_project1_Source_project1_project1WeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_UnrealPJ_project1_Source_project1_project1WeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_UnrealPJ_project1_Source_project1_project1WeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT1_API UClass* StaticClass<class Uproject1WeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_UnrealPJ_project1_Source_project1_project1WeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
