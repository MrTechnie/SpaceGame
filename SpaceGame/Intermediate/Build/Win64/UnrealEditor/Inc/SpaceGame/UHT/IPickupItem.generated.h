// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IPickupItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACEGAME_IPickupItem_generated_h
#error "IPickupItem.generated.h already included, missing '#pragma once' in IPickupItem.h"
#endif
#define SPACEGAME_IPickupItem_generated_h

#define FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_SPARSE_DATA
#define FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_RPC_WRAPPERS
#define FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_ACCESSORS
#define FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SPACEGAME_API UIPickupItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIPickupItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SPACEGAME_API, UIPickupItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIPickupItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SPACEGAME_API UIPickupItem(UIPickupItem&&); \
	SPACEGAME_API UIPickupItem(const UIPickupItem&); \
public: \
	SPACEGAME_API virtual ~UIPickupItem();


#define FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SPACEGAME_API UIPickupItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SPACEGAME_API UIPickupItem(UIPickupItem&&); \
	SPACEGAME_API UIPickupItem(const UIPickupItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SPACEGAME_API, UIPickupItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIPickupItem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIPickupItem) \
	SPACEGAME_API virtual ~UIPickupItem();


#define FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIPickupItem(); \
	friend struct Z_Construct_UClass_UIPickupItem_Statics; \
public: \
	DECLARE_CLASS(UIPickupItem, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SpaceGame"), SPACEGAME_API) \
	DECLARE_SERIALIZER(UIPickupItem)


#define FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_GENERATED_UINTERFACE_BODY() \
	FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_GENERATED_UINTERFACE_BODY() \
	FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIPickupItem() {} \
public: \
	typedef UIPickupItem UClassType; \
	typedef IIPickupItem ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIPickupItem() {} \
public: \
	typedef UIPickupItem UClassType; \
	typedef IIPickupItem ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_10_PROLOG
#define FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_SPARSE_DATA \
	FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_RPC_WRAPPERS \
	FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_ACCESSORS \
	FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_SPARSE_DATA \
	FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_ACCESSORS \
	FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACEGAME_API UClass* StaticClass<class UIPickupItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpaceGame_Source_SpaceGame_Public_IPickupItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
