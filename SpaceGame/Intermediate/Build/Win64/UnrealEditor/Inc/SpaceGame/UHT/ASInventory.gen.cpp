// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceGame/Public/ASInventory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASInventory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SPACEGAME_API UClass* Z_Construct_UClass_USInventory_AC();
	SPACEGAME_API UClass* Z_Construct_UClass_USInventory_AC_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SpaceGame();
// End Cross Module References
	void USInventory_AC::StaticRegisterNativesUSInventory_AC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USInventory_AC);
	UClass* Z_Construct_UClass_USInventory_AC_NoRegister()
	{
		return USInventory_AC::StaticClass();
	}
	struct Z_Construct_UClass_USInventory_AC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USInventory_AC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USInventory_AC_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ASInventory.h" },
		{ "ModuleRelativePath", "Public/ASInventory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USInventory_AC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USInventory_AC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USInventory_AC_Statics::ClassParams = {
		&USInventory_AC::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USInventory_AC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USInventory_AC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USInventory_AC()
	{
		if (!Z_Registration_Info_UClass_USInventory_AC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USInventory_AC.OuterSingleton, Z_Construct_UClass_USInventory_AC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USInventory_AC.OuterSingleton;
	}
	template<> SPACEGAME_API UClass* StaticClass<USInventory_AC>()
	{
		return USInventory_AC::StaticClass();
	}
	USInventory_AC::USInventory_AC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USInventory_AC);
	USInventory_AC::~USInventory_AC() {}
	struct Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_ASInventory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_ASInventory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USInventory_AC, USInventory_AC::StaticClass, TEXT("USInventory_AC"), &Z_Registration_Info_UClass_USInventory_AC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USInventory_AC), 117362159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_ASInventory_h_2338730375(TEXT("/Script/SpaceGame"),
		Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_ASInventory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SpaceGame_Source_SpaceGame_Public_ASInventory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
