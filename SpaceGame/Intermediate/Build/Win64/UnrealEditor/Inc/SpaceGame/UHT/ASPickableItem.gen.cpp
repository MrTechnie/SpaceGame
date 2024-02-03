// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceGame/Public/ASPickableItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASPickableItem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SPACEGAME_API UClass* Z_Construct_UClass_ASPickableItem();
	SPACEGAME_API UClass* Z_Construct_UClass_ASPickableItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpaceGame();
// End Cross Module References
	void ASPickableItem::StaticRegisterNativesASPickableItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASPickableItem);
	UClass* Z_Construct_UClass_ASPickableItem_NoRegister()
	{
		return ASPickableItem::StaticClass();
	}
	struct Z_Construct_UClass_ASPickableItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPickableItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPickableItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*UINTERFACE(MinimalAPI, Blueprintable)\nclass UPickupItem : public UInterface {\n\npublic:\n\n\x09virtual void PickupItem(FString NewItem);\n\n\n};\n*/" },
		{ "IncludePath", "ASPickableItem.h" },
		{ "ModuleRelativePath", "Public/ASPickableItem.h" },
		{ "ToolTip", "UINTERFACE(MinimalAPI, Blueprintable)\nclass UPickupItem : public UInterface {\n\npublic:\n\n       virtual void PickupItem(FString NewItem);\n\n\n};" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPickableItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPickableItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASPickableItem_Statics::ClassParams = {
		&ASPickableItem::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASPickableItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPickableItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPickableItem()
	{
		if (!Z_Registration_Info_UClass_ASPickableItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASPickableItem.OuterSingleton, Z_Construct_UClass_ASPickableItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASPickableItem.OuterSingleton;
	}
	template<> SPACEGAME_API UClass* StaticClass<ASPickableItem>()
	{
		return ASPickableItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPickableItem);
	ASPickableItem::~ASPickableItem() {}
	struct Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_ASPickableItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_ASPickableItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASPickableItem, ASPickableItem::StaticClass, TEXT("ASPickableItem"), &Z_Registration_Info_UClass_ASPickableItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPickableItem), 1206014051U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_ASPickableItem_h_2052367669(TEXT("/Script/SpaceGame"),
		Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_ASPickableItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_ASPickableItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
