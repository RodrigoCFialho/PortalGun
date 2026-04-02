// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PortalGunGameMode.h"

#ifdef PORTALGUN_PortalGunGameMode_generated_h
#error "PortalGunGameMode.generated.h already included, missing '#pragma once' in PortalGunGameMode.h"
#endif
#define PORTALGUN_PortalGunGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APortalGunGameMode *******************************************************
PORTALGUN_API UClass* Z_Construct_UClass_APortalGunGameMode_NoRegister();

#define FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_PortalGunGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortalGunGameMode(); \
	friend struct Z_Construct_UClass_APortalGunGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PORTALGUN_API UClass* Z_Construct_UClass_APortalGunGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(APortalGunGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortalGun"), Z_Construct_UClass_APortalGunGameMode_NoRegister) \
	DECLARE_SERIALIZER(APortalGunGameMode)


#define FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_PortalGunGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APortalGunGameMode(APortalGunGameMode&&) = delete; \
	APortalGunGameMode(const APortalGunGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortalGunGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortalGunGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APortalGunGameMode) \
	NO_API virtual ~APortalGunGameMode();


#define FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_PortalGunGameMode_h_12_PROLOG
#define FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_PortalGunGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_PortalGunGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_PortalGunGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APortalGunGameMode;

// ********** End Class APortalGunGameMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rodri_Documents_GitHub_PortalGun_PortalGun_Source_PortalGun_PortalGunGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
