// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/MyPawn_Hero.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPawn_Hero() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_AMyPawn_Hero();
	MYGAME_API UClass* Z_Construct_UClass_AMyPawn_Hero_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	void AMyPawn_Hero::StaticRegisterNativesAMyPawn_Hero()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPawn_Hero);
	UClass* Z_Construct_UClass_AMyPawn_Hero_NoRegister()
	{
		return AMyPawn_Hero::StaticClass();
	}
	struct Z_Construct_UClass_AMyPawn_Hero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPawn_Hero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Hero_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPawn_Hero.h" },
		{ "ModuleRelativePath", "MyPawn_Hero.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPawn_Hero.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn_Hero, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_BodyMesh_MetaData), Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_BodyMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPawn_Hero.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn_Hero, WeaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_WeaponMesh_MetaData), Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_WeaponMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPawn_Hero.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn_Hero, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_BoxCollision_MetaData), Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_BoxCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPawn_Hero.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn_Hero, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CameraComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPawn_Hero_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_BodyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_WeaponMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_BoxCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPawn_Hero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawn_Hero>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPawn_Hero_Statics::ClassParams = {
		&AMyPawn_Hero::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyPawn_Hero_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPawn_Hero_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyPawn_Hero()
	{
		if (!Z_Registration_Info_UClass_AMyPawn_Hero.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPawn_Hero.OuterSingleton, Z_Construct_UClass_AMyPawn_Hero_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyPawn_Hero.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<AMyPawn_Hero>()
	{
		return AMyPawn_Hero::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn_Hero);
	AMyPawn_Hero::~AMyPawn_Hero() {}
	struct Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_MyPawn_Hero_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_MyPawn_Hero_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPawn_Hero, AMyPawn_Hero::StaticClass, TEXT("AMyPawn_Hero"), &Z_Registration_Info_UClass_AMyPawn_Hero, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPawn_Hero), 2026016236U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_MyPawn_Hero_h_765025369(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_MyPawn_Hero_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_MyPawn_Hero_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
