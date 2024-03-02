// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceGame/Public/W_Inventory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_Inventory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	SPACEGAME_API UClass* Z_Construct_UClass_AW_Inventory();
	SPACEGAME_API UClass* Z_Construct_UClass_AW_Inventory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpaceGame();
// End Cross Module References
	void AW_Inventory::StaticRegisterNativesAW_Inventory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AW_Inventory);
	UClass* Z_Construct_UClass_AW_Inventory_NoRegister()
	{
		return AW_Inventory::StaticClass();
	}
	struct Z_Construct_UClass_AW_Inventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AW_Inventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_Inventory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "W_Inventory.h" },
		{ "ModuleRelativePath", "Public/W_Inventory.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AW_Inventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW_Inventory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AW_Inventory_Statics::ClassParams = {
		&AW_Inventory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AW_Inventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AW_Inventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AW_Inventory()
	{
		if (!Z_Registration_Info_UClass_AW_Inventory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AW_Inventory.OuterSingleton, Z_Construct_UClass_AW_Inventory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AW_Inventory.OuterSingleton;
	}
	template<> SPACEGAME_API UClass* StaticClass<AW_Inventory>()
	{
		return AW_Inventory::StaticClass();
	}
	AW_Inventory::AW_Inventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AW_Inventory);
	AW_Inventory::~AW_Inventory() {}
	struct Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_W_Inventory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_W_Inventory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AW_Inventory, AW_Inventory::StaticClass, TEXT("AW_Inventory"), &Z_Registration_Info_UClass_AW_Inventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AW_Inventory), 947782756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_W_Inventory_h_2331437016(TEXT("/Script/SpaceGame"),
		Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_W_Inventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_W_Inventory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
