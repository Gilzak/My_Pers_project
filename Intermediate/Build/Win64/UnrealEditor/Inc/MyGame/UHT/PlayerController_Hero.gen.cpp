// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/PlayerController_Hero.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerController_Hero() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	MYGAME_API UClass* Z_Construct_UClass_AMyPawn_Hero_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_APlayerController_Hero();
	MYGAME_API UClass* Z_Construct_UClass_APlayerController_Hero_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	void APlayerController_Hero::StaticRegisterNativesAPlayerController_Hero()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerController_Hero);
	UClass* Z_Construct_UClass_APlayerController_Hero_NoRegister()
	{
		return APlayerController_Hero::StaticClass();
	}
	struct Z_Construct_UClass_APlayerController_Hero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyPawn_Hero_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyPawn_Hero;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MousePos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MousePos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerController_Hero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Hero_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Hero_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController_Hero.h" },
		{ "ModuleRelativePath", "PlayerController_Hero.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Hero_Statics::NewProp_MyPawn_Hero_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController_Hero.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Hero_Statics::NewProp_MyPawn_Hero = { "MyPawn_Hero", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController_Hero, MyPawn_Hero), Z_Construct_UClass_AMyPawn_Hero_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Hero_Statics::NewProp_MyPawn_Hero_MetaData), Z_Construct_UClass_APlayerController_Hero_Statics::NewProp_MyPawn_Hero_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Hero_Statics::NewProp_MousePos_MetaData[] = {
		{ "ModuleRelativePath", "PlayerController_Hero.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_Hero_Statics::NewProp_MousePos = { "MousePos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController_Hero, MousePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Hero_Statics::NewProp_MousePos_MetaData), Z_Construct_UClass_APlayerController_Hero_Statics::NewProp_MousePos_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerController_Hero_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Hero_Statics::NewProp_MyPawn_Hero,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Hero_Statics::NewProp_MousePos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerController_Hero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerController_Hero>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerController_Hero_Statics::ClassParams = {
		&APlayerController_Hero::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerController_Hero_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Hero_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Hero_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerController_Hero_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Hero_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerController_Hero()
	{
		if (!Z_Registration_Info_UClass_APlayerController_Hero.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerController_Hero.OuterSingleton, Z_Construct_UClass_APlayerController_Hero_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerController_Hero.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<APlayerController_Hero>()
	{
		return APlayerController_Hero::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerController_Hero);
	APlayerController_Hero::~APlayerController_Hero() {}
	struct Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_PlayerController_Hero_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_PlayerController_Hero_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerController_Hero, APlayerController_Hero::StaticClass, TEXT("APlayerController_Hero"), &Z_Registration_Info_UClass_APlayerController_Hero, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerController_Hero), 3625114151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_PlayerController_Hero_h_3881291133(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_PlayerController_Hero_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_PlayerController_Hero_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
