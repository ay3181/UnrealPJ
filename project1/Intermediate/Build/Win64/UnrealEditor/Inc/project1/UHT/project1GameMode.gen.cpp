// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "project1/project1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeproject1GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECT1_API UClass* Z_Construct_UClass_Aproject1GameMode();
PROJECT1_API UClass* Z_Construct_UClass_Aproject1GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_project1();
// End Cross Module References

// Begin Class Aproject1GameMode
void Aproject1GameMode::StaticRegisterNativesAproject1GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aproject1GameMode);
UClass* Z_Construct_UClass_Aproject1GameMode_NoRegister()
{
	return Aproject1GameMode::StaticClass();
}
struct Z_Construct_UClass_Aproject1GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "project1GameMode.h" },
		{ "ModuleRelativePath", "project1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aproject1GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Aproject1GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_project1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aproject1GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Aproject1GameMode_Statics::ClassParams = {
	&Aproject1GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aproject1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Aproject1GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Aproject1GameMode()
{
	if (!Z_Registration_Info_UClass_Aproject1GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aproject1GameMode.OuterSingleton, Z_Construct_UClass_Aproject1GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Aproject1GameMode.OuterSingleton;
}
template<> PROJECT1_API UClass* StaticClass<Aproject1GameMode>()
{
	return Aproject1GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Aproject1GameMode);
Aproject1GameMode::~Aproject1GameMode() {}
// End Class Aproject1GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_UnrealPJ_project1_Source_project1_project1GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Aproject1GameMode, Aproject1GameMode::StaticClass, TEXT("Aproject1GameMode"), &Z_Registration_Info_UClass_Aproject1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aproject1GameMode), 1561122986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_UnrealPJ_project1_Source_project1_project1GameMode_h_2207933707(TEXT("/Script/project1"),
	Z_CompiledInDeferFile_FID_Unreal_UnrealPJ_project1_Source_project1_project1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_UnrealPJ_project1_Source_project1_project1GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
