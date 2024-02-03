// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceGame/Public/IPickupItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPickupItem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SPACEGAME_API UClass* Z_Construct_UClass_UIPickupItem();
	SPACEGAME_API UClass* Z_Construct_UClass_UIPickupItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpaceGame();
// End Cross Module References
	void UIPickupItem::StaticRegisterNativesUIPickupItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIPickupItem);
	UClass* Z_Construct_UClass_UIPickupItem_NoRegister()
	{
		return UIPickupItem::StaticClass();
	}
	struct Z_Construct_UClass_UIPickupItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIPickupItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIPickupItem_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IPickupItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIPickupItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIPickupItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIPickupItem_Statics::ClassParams = {
		&UIPickupItem::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIPickupItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIPickupItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIPickupItem()
	{
		if (!Z_Registration_Info_UClass_UIPickupItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIPickupItem.OuterSingleton, Z_Construct_UClass_UIPickupItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIPickupItem.OuterSingleton;
	}
	template<> SPACEGAME_API UClass* StaticClass<UIPickupItem>()
	{
		return UIPickupItem::StaticClass();
	}
	UIPickupItem::UIPickupItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIPickupItem);
	UIPickupItem::~UIPickupItem() {}
	struct Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIPickupItem, UIPickupItem::StaticClass, TEXT("UIPickupItem"), &Z_Registration_Info_UClass_UIPickupItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIPickupItem), 3509770745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_1562266804(TEXT("/Script/SpaceGame"),
		Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
