// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PortalGunPlayerController.h"

#ifdef PORTALGUN_PortalGunPlayerController_generated_h
#error "PortalGunPlayerController.generated.h already included, missing '#pragma once' in PortalGunPlayerController.h"
#endif
#define PORTALGUN_PortalGunPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APortalGunPlayerController ***********************************************
PORTALGUN_API UClass* Z_Construct_UClass_APortalGunPlayerController_NoRegister();

#define FID_Users_rodri_Documents_Unreal_Projects_PortalGun_Source_PortalGun_PortalGunPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortalGunPlayerController(); \
	friend struct Z_Construct_UClass_APortalGunPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PORTALGUN_API UClass* Z_Construct_UClass_APortalGunPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(APortalGunPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PortalGun"), Z_Construct_UClass_APortalGunPlayerController_NoRegister) \
	DECLARE_SERIALIZER(APortalGunPlayerController)


#define FID_Users_rodri_Documents_Unreal_Projects_PortalGun_Source_PortalGun_PortalGunPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APortalGunPlayerController(APortalGunPlayerController&&) = delete; \
	APortalGunPlayerController(const APortalGunPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortalGunPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortalGunPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APortalGunPlayerController) \
	NO_API virtual ~APortalGunPlayerController();


#define FID_Users_rodri_Documents_Unreal_Projects_PortalGun_Source_PortalGun_PortalGunPlayerController_h_17_PROLOG
#define FID_Users_rodri_Documents_Unreal_Projects_PortalGun_Source_PortalGun_PortalGunPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rodri_Documents_Unreal_Projects_PortalGun_Source_PortalGun_PortalGunPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_rodri_Documents_Unreal_Projects_PortalGun_Source_PortalGun_PortalGunPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APortalGunPlayerController;

// ********** End Class APortalGunPlayerController *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rodri_Documents_Unreal_Projects_PortalGun_Source_PortalGun_PortalGunPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
