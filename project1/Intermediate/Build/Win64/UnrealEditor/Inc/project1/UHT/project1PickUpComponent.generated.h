// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "project1PickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class Aproject1Character;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROJECT1_project1PickUpComponent_generated_h
#error "project1PickUpComponent.generated.h already included, missing '#pragma once' in project1PickUpComponent.h"
#endif
#define PROJECT1_project1PickUpComponent_generated_h

#define FID_Unreal_UnrealPJ_project1_Source_project1_project1PickUpComponent_h_12_DELEGATE \
PROJECT1_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, Aproject1Character* PickUpCharacter);


#define FID_Unreal_UnrealPJ_project1_Source_project1_project1PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Unreal_UnrealPJ_project1_Source_project1_project1PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUproject1PickUpComponent(); \
	friend struct Z_Construct_UClass_Uproject1PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(Uproject1PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/project1"), NO_API) \
	DECLARE_SERIALIZER(Uproject1PickUpComponent)


#define FID_Unreal_UnrealPJ_project1_Source_project1_project1PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	Uproject1PickUpComponent(Uproject1PickUpComponent&&); \
	Uproject1PickUpComponent(const Uproject1PickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Uproject1PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Uproject1PickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Uproject1PickUpComponent) \
	NO_API virtual ~Uproject1PickUpComponent();


#define FID_Unreal_UnrealPJ_project1_Source_project1_project1PickUpComponent_h_14_PROLOG
#define FID_Unreal_UnrealPJ_project1_Source_project1_project1PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_UnrealPJ_project1_Source_project1_project1PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_UnrealPJ_project1_Source_project1_project1PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_UnrealPJ_project1_Source_project1_project1PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT1_API UClass* StaticClass<class Uproject1PickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_UnrealPJ_project1_Source_project1_project1PickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
