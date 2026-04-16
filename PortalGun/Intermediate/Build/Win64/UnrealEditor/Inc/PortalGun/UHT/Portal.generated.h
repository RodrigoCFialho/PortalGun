// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Portal.h"

#ifdef PORTALGUN_Portal_generated_h
#error "Portal.generated.h already included, missing '#pragma once' in Portal.h"
#endif
#define PORTALGUN_Portal_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APortal ******************************************************************
PORTALGUN_API UClass* Z_Construct_UClass_APortal_NoRegister();

#define FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_Portal_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortal(); \
	friend struct Z_Construct_UClass_APortal_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PORTALGUN_API UClass* Z_Construct_UClass_APortal_NoRegister(); \
public: \
	DECLARE_CLASS2(APortal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortalGun"), Z_Construct_UClass_APortal_NoRegister) \
	DECLARE_SERIALIZER(APortal)


#define FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_Portal_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APortal(APortal&&) = delete; \
	APortal(const APortal&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortal) \
	NO_API virtual ~APortal();


#define FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_Portal_h_9_PROLOG
#define FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_Portal_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_Portal_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_Portal_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APortal;

// ********** End Class APortal ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_Portal_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
