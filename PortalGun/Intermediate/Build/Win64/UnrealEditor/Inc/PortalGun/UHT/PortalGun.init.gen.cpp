// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalGun_init() {}
	PORTALGUN_API UFunction* Z_Construct_UDelegateFunction_PortalGun_BulletCountUpdatedDelegate__DelegateSignature();
	PORTALGUN_API UFunction* Z_Construct_UDelegateFunction_PortalGun_DamagedDelegate__DelegateSignature();
	PORTALGUN_API UFunction* Z_Construct_UDelegateFunction_PortalGun_PawnDeathDelegate__DelegateSignature();
	PORTALGUN_API UFunction* Z_Construct_UDelegateFunction_PortalGun_SprintStateChangedDelegate__DelegateSignature();
	PORTALGUN_API UFunction* Z_Construct_UDelegateFunction_PortalGun_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PortalGun;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PortalGun()
	{
		if (!Z_Registration_Info_UPackage__Script_PortalGun.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PortalGun_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PortalGun_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PortalGun_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PortalGun_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_PortalGun_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PortalGun",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x74153747,
				0xCF2DB1FB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PortalGun.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PortalGun.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PortalGun(Z_Construct_UPackage__Script_PortalGun, TEXT("/Script/PortalGun"), Z_Registration_Info_UPackage__Script_PortalGun, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x74153747, 0xCF2DB1FB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
