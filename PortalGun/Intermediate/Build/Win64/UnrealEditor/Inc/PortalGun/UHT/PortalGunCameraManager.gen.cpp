// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalGunCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePortalGunCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
PORTALGUN_API UClass* Z_Construct_UClass_APortalGunCameraManager();
PORTALGUN_API UClass* Z_Construct_UClass_APortalGunCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortalGun();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APortalGunCameraManager **************************************************
void APortalGunCameraManager::StaticRegisterNativesAPortalGunCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APortalGunCameraManager;
UClass* APortalGunCameraManager::GetPrivateStaticClass()
{
	using TClass = APortalGunCameraManager;
	if (!Z_Registration_Info_UClass_APortalGunCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PortalGunCameraManager"),
			Z_Registration_Info_UClass_APortalGunCameraManager.InnerSingleton,
			StaticRegisterNativesAPortalGunCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APortalGunCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_APortalGunCameraManager_NoRegister()
{
	return APortalGunCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APortalGunCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "PortalGunCameraManager.h" },
		{ "ModuleRelativePath", "PortalGunCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortalGunCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APortalGunCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_PortalGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortalGunCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APortalGunCameraManager_Statics::ClassParams = {
	&APortalGunCameraManager::StaticClass,
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
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortalGunCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_APortalGunCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APortalGunCameraManager()
{
	if (!Z_Registration_Info_UClass_APortalGunCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortalGunCameraManager.OuterSingleton, Z_Construct_UClass_APortalGunCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APortalGunCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APortalGunCameraManager);
APortalGunCameraManager::~APortalGunCameraManager() {}
// ********** End Class APortalGunCameraManager ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_rodri_Documents_Unreal_Projects_PortalGun_Source_PortalGun_PortalGunCameraManager_h__Script_PortalGun_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APortalGunCameraManager, APortalGunCameraManager::StaticClass, TEXT("APortalGunCameraManager"), &Z_Registration_Info_UClass_APortalGunCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortalGunCameraManager), 2620167051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rodri_Documents_Unreal_Projects_PortalGun_Source_PortalGun_PortalGunCameraManager_h__Script_PortalGun_629591386(TEXT("/Script/PortalGun"),
	Z_CompiledInDeferFile_FID_Users_rodri_Documents_Unreal_Projects_PortalGun_Source_PortalGun_PortalGunCameraManager_h__Script_PortalGun_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rodri_Documents_Unreal_Projects_PortalGun_Source_PortalGun_PortalGunCameraManager_h__Script_PortalGun_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
