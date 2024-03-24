// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameStructs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYGAME_GameStructs_generated_h
#error "GameStructs.generated.h already included, missing '#pragma once' in GameStructs.h"
#endif
#define MYGAME_GameStructs_generated_h

#define FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_15_SPARSE_DATA
#define FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_15_ACCESSORS
#define FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameStructs(); \
	friend struct Z_Construct_UClass_UGameStructs_Statics; \
public: \
	DECLARE_CLASS(UGameStructs, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyGame"), NO_API) \
	DECLARE_SERIALIZER(UGameStructs)


#define FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameStructs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameStructs(UGameStructs&&); \
	NO_API UGameStructs(const UGameStructs&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameStructs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameStructs); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameStructs) \
	NO_API virtual ~UGameStructs();


#define FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_12_PROLOG
#define FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_15_SPARSE_DATA \
	FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_15_ACCESSORS \
	FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_15_INCLASS_NO_PURE_DECLS \
	FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYGAME_API UClass* StaticClass<class UGameStructs>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_my_pers_project_project_game_MyGame_Source_MyGame_GameStructs_h


#define FOREACH_ENUM_ECANNONTYPE(op) \
	op(ECannonType::FireProjectile) \
	op(ECannonType::FireTrace) 

enum class ECannonType;
template<> struct TIsUEnumClass<ECannonType> { enum { Value = true }; };
template<> MYGAME_API UEnum* StaticEnum<ECannonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
