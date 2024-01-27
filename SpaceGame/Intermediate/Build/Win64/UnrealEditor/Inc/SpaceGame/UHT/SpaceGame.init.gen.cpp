// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SpaceGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SpaceGame()
	{
		if (!Z_Registration_Info_UPackage__Script_SpaceGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SpaceGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x4A1025A0,
				0xC5C2BDEC,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SpaceGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SpaceGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SpaceGame(Z_Construct_UPackage__Script_SpaceGame, TEXT("/Script/SpaceGame"), Z_Registration_Info_UPackage__Script_SpaceGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4A1025A0, 0xC5C2BDEC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
