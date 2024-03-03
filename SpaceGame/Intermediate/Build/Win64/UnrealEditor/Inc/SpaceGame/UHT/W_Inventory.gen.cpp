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
	SPACEGAME_API UClass* Z_Construct_UClass_UW_Inventory();
	SPACEGAME_API UClass* Z_Construct_UClass_UW_Inventory_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_SpaceGame();
// End Cross Module References
	void UW_Inventory::StaticRegisterNativesUW_Inventory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UW_Inventory);
	UClass* Z_Construct_UClass_UW_Inventory_NoRegister()
	{
		return UW_Inventory::StaticClass();
	}
	struct Z_Construct_UClass_UW_Inventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UW_Inventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UW_Inventory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "W_Inventory.h" },
		{ "ModuleRelativePath", "Public/W_Inventory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UW_Inventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_Inventory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UW_Inventory_Statics::ClassParams = {
		&UW_Inventory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UW_Inventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UW_Inventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UW_Inventory()
	{
		if (!Z_Registration_Info_UClass_UW_Inventory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW_Inventory.OuterSingleton, Z_Construct_UClass_UW_Inventory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UW_Inventory.OuterSingleton;
	}
	template<> SPACEGAME_API UClass* StaticClass<UW_Inventory>()
	{
		return UW_Inventory::StaticClass();
	}
	UW_Inventory::UW_Inventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UW_Inventory);
	UW_Inventory::~UW_Inventory() {}
	struct Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_W_Inventory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_W_Inventory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UW_Inventory, UW_Inventory::StaticClass, TEXT("UW_Inventory"), &Z_Registration_Info_UClass_UW_Inventory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW_Inventory), 2568574744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_W_Inventory_h_4282576485(TEXT("/Script/SpaceGame"),
		Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_W_Inventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_W_Inventory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
