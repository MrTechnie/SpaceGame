// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ASCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPACEGAME_ASCharacter_generated_h
#error "ASCharacter.generated.h already included, missing '#pragma once' in ASCharacter.h"
#endif
#define SPACEGAME_ASCharacter_generated_h

#define FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_SPARSE_DATA
#define FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_RPC_WRAPPERS
#define FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_ACCESSORS
#define FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceGame"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpaceGame"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	NO_API virtual ~ASCharacter();


#define FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter) \
	NO_API virtual ~ASCharacter();


#define FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_16_PROLOG
#define FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_SPARSE_DATA \
	FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_RPC_WRAPPERS \
	FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_ACCESSORS \
	FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_INCLASS \
	FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_SPARSE_DATA \
	FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_ACCESSORS \
	FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_INCLASS_NO_PURE_DECLS \
	FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPACEGAME_API UClass* StaticClass<class ASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SpaceGame_Source_SpaceGame_Public_ASCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
