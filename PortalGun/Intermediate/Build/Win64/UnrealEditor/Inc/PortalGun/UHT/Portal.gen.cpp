// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Portal.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePortal() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PORTALGUN_API UClass* Z_Construct_UClass_APortal();
PORTALGUN_API UClass* Z_Construct_UClass_APortal_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortalGun();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APortal ******************************************************************
void APortal::StaticRegisterNativesAPortal()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APortal;
UClass* APortal::GetPrivateStaticClass()
{
	using TClass = APortal;
	if (!Z_Registration_Info_UClass_APortal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Portal"),
			Z_Registration_Info_UClass_APortal.InnerSingleton,
			StaticRegisterNativesAPortal,
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
	return Z_Registration_Info_UClass_APortal.InnerSingleton;
}
UClass* Z_Construct_UClass_APortal_NoRegister()
{
	return APortal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APortal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Portal.h" },
		{ "ModuleRelativePath", "Portal.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APortal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PortalGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APortal_Statics::ClassParams = {
	&APortal::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::Class_MetaDataParams), Z_Construct_UClass_APortal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APortal()
{
	if (!Z_Registration_Info_UClass_APortal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortal.OuterSingleton, Z_Construct_UClass_APortal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APortal.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APortal);
APortal::~APortal() {}
// ********** End Class APortal ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_Portal_h__Script_PortalGun_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APortal, APortal::StaticClass, TEXT("APortal"), &Z_Registration_Info_UClass_APortal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortal), 296921589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_Portal_h__Script_PortalGun_2553036582(TEXT("/Script/PortalGun"),
	Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_Portal_h__Script_PortalGun_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_Portal_h__Script_PortalGun_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
