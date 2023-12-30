// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceGame/SpaceGameGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpaceGameGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SPACEGAME_API UClass* Z_Construct_UClass_ASpaceGameGameModeBase();
	SPACEGAME_API UClass* Z_Construct_UClass_ASpaceGameGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpaceGame();
// End Cross Module References
	void ASpaceGameGameModeBase::StaticRegisterNativesASpaceGameGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpaceGameGameModeBase);
	UClass* Z_Construct_UClass_ASpaceGameGameModeBase_NoRegister()
	{
		return ASpaceGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpaceGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpaceGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpaceGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SpaceGameGameModeBase.h" },
		{ "ModuleRelativePath", "SpaceGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpaceGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpaceGameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpaceGameGameModeBase_Statics::ClassParams = {
		&ASpaceGameGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpaceGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpaceGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpaceGameGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASpaceGameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpaceGameGameModeBase.OuterSingleton, Z_Construct_UClass_ASpaceGameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpaceGameGameModeBase.OuterSingleton;
	}
	template<> SPACEGAME_API UClass* StaticClass<ASpaceGameGameModeBase>()
	{
		return ASpaceGameGameModeBase::StaticClass();
	}
	ASpaceGameGameModeBase::ASpaceGameGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpaceGameGameModeBase);
	ASpaceGameGameModeBase::~ASpaceGameGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_SpaceGameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_SpaceGameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpaceGameGameModeBase, ASpaceGameGameModeBase::StaticClass, TEXT("ASpaceGameGameModeBase"), &Z_Registration_Info_UClass_ASpaceGameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpaceGameGameModeBase), 4036066279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_SpaceGameGameModeBase_h_780425335(TEXT("/Script/SpaceGame"),
		Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_SpaceGameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_SpaceGameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
