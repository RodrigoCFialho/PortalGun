// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalGunGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePortalGunGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PORTALGUN_API UClass* Z_Construct_UClass_APortalGunGameMode();
PORTALGUN_API UClass* Z_Construct_UClass_APortalGunGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortalGun();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APortalGunGameMode *******************************************************
void APortalGunGameMode::StaticRegisterNativesAPortalGunGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APortalGunGameMode;
UClass* APortalGunGameMode::GetPrivateStaticClass()
{
	using TClass = APortalGunGameMode;
	if (!Z_Registration_Info_UClass_APortalGunGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PortalGunGameMode"),
			Z_Registration_Info_UClass_APortalGunGameMode.InnerSingleton,
			StaticRegisterNativesAPortalGunGameMode,
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
	return Z_Registration_Info_UClass_APortalGunGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_APortalGunGameMode_NoRegister()
{
	return APortalGunGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APortalGunGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PortalGunGameMode.h" },
		{ "ModuleRelativePath", "PortalGunGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortalGunGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APortalGunGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PortalGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortalGunGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APortalGunGameMode_Statics::ClassParams = {
	&APortalGunGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortalGunGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APortalGunGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APortalGunGameMode()
{
	if (!Z_Registration_Info_UClass_APortalGunGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortalGunGameMode.OuterSingleton, Z_Construct_UClass_APortalGunGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APortalGunGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APortalGunGameMode);
APortalGunGameMode::~APortalGunGameMode() {}
// ********** End Class APortalGunGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_rodri_Documents_Unreal_Projects_PortalGun_Source_PortalGun_PortalGunGameMode_h__Script_PortalGun_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APortalGunGameMode, APortalGunGameMode::StaticClass, TEXT("APortalGunGameMode"), &Z_Registration_Info_UClass_APortalGunGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortalGunGameMode), 2996865349U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rodri_Documents_Unreal_Projects_PortalGun_Source_PortalGun_PortalGunGameMode_h__Script_PortalGun_267869352(TEXT("/Script/PortalGun"),
	Z_CompiledInDeferFile_FID_Users_rodri_Documents_Unreal_Projects_PortalGun_Source_PortalGun_PortalGunGameMode_h__Script_PortalGun_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rodri_Documents_Unreal_Projects_PortalGun_Source_PortalGun_PortalGunGameMode_h__Script_PortalGun_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
