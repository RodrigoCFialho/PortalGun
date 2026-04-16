// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortalWall.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePortalWall() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PORTALGUN_API UClass* Z_Construct_UClass_APortalWall();
PORTALGUN_API UClass* Z_Construct_UClass_APortalWall_NoRegister();
UPackage* Z_Construct_UPackage__Script_PortalGun();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APortalWall **************************************************************
void APortalWall::StaticRegisterNativesAPortalWall()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APortalWall;
UClass* APortalWall::GetPrivateStaticClass()
{
	using TClass = APortalWall;
	if (!Z_Registration_Info_UClass_APortalWall.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PortalWall"),
			Z_Registration_Info_UClass_APortalWall.InnerSingleton,
			StaticRegisterNativesAPortalWall,
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
	return Z_Registration_Info_UClass_APortalWall.InnerSingleton;
}
UClass* Z_Construct_UClass_APortalWall_NoRegister()
{
	return APortalWall::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APortalWall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PortalWall.h" },
		{ "ModuleRelativePath", "PortalWall.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallWidth_MetaData[] = {
		{ "Category", "Portal Wall" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The width of the wall\n" },
#endif
		{ "ModuleRelativePath", "PortalWall.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The width of the wall" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallHeight_MetaData[] = {
		{ "Category", "Portal Wall" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The height of the wall\n" },
#endif
		{ "ModuleRelativePath", "PortalWall.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The height of the wall" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortalWallMesh_MetaData[] = {
		{ "allowprivateaccess", "TRUE" },
		{ "Category", "Pickup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Static mesh to represent the wall in the level\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PortalWall.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static mesh to represent the wall in the level" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalWallMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortalWall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortalWall_Statics::NewProp_WallWidth = { "WallWidth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalWall, WallWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallWidth_MetaData), NewProp_WallWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APortalWall_Statics::NewProp_WallHeight = { "WallHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalWall, WallHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallHeight_MetaData), NewProp_WallHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortalWall_Statics::NewProp_PortalWallMesh = { "PortalWallMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortalWall, PortalWallMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortalWallMesh_MetaData), NewProp_PortalWallMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortalWall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalWall_Statics::NewProp_WallWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalWall_Statics::NewProp_WallHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortalWall_Statics::NewProp_PortalWallMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortalWall_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APortalWall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PortalGun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortalWall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APortalWall_Statics::ClassParams = {
	&APortalWall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APortalWall_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APortalWall_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortalWall_Statics::Class_MetaDataParams), Z_Construct_UClass_APortalWall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APortalWall()
{
	if (!Z_Registration_Info_UClass_APortalWall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortalWall.OuterSingleton, Z_Construct_UClass_APortalWall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APortalWall.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APortalWall);
APortalWall::~APortalWall() {}
// ********** End Class APortalWall ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_PortalWall_h__Script_PortalGun_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APortalWall, APortalWall::StaticClass, TEXT("APortalWall"), &Z_Registration_Info_UClass_APortalWall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortalWall), 2810970227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_PortalWall_h__Script_PortalGun_1794721504(TEXT("/Script/PortalGun"),
	Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_PortalWall_h__Script_PortalGun_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_PortalWall_h__Script_PortalGun_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
