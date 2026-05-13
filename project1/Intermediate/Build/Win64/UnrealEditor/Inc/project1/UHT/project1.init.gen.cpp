// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeproject1_init() {}
	PROJECT1_API UFunction* Z_Construct_UDelegateFunction_project1_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_project1;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_project1()
	{
		if (!Z_Registration_Info_UPackage__Script_project1.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_project1_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/project1",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x68E16E6E,
				0x9F91CF66,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_project1.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_project1.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_project1(Z_Construct_UPackage__Script_project1, TEXT("/Script/project1"), Z_Registration_Info_UPackage__Script_project1, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x68E16E6E, 0x9F91CF66));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
