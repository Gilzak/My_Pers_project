// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyGame/Cannon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannon() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_ACannon();
	MYGAME_API UClass* Z_Construct_UClass_ACannon_NoRegister();
	MYGAME_API UEnum* Z_Construct_UEnum_MyGame_ECannonType();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	void ACannon::StaticRegisterNativesACannon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACannon);
	UClass* Z_Construct_UClass_ACannon_NoRegister()
	{
		return ACannon::StaticClass();
	}
	struct Z_Construct_UClass_ACannon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectTileSpawnPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectTileSpawnPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireDamage;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACannon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cannon.h" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACannon, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_ACannon_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_ProjectTileSpawnPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_ProjectTileSpawnPoint = { "ProjectTileSpawnPoint", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACannon, ProjectTileSpawnPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_ProjectTileSpawnPoint_MetaData), Z_Construct_UClass_ACannon_Statics::NewProp_ProjectTileSpawnPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Fire params" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACannon, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_FireRate_MetaData), Z_Construct_UClass_ACannon_Statics::NewProp_FireRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_FireRange_MetaData[] = {
		{ "Category", "Fire params" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_FireRange = { "FireRange", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACannon, FireRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_FireRange_MetaData), Z_Construct_UClass_ACannon_Statics::NewProp_FireRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_FireDamage_MetaData[] = {
		{ "Category", "Fire params" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_FireDamage = { "FireDamage", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACannon, FireDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_FireDamage_MetaData), Z_Construct_UClass_ACannon_Statics::NewProp_FireDamage_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Fire params" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACannon, Type), Z_Construct_UEnum_MyGame_ECannonType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_Type_MetaData), Z_Construct_UClass_ACannon_Statics::NewProp_Type_MetaData) }; // 114454892
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACannon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_ProjectTileSpawnPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_FireRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_FireDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACannon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACannon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACannon_Statics::ClassParams = {
		&ACannon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACannon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::Class_MetaDataParams), Z_Construct_UClass_ACannon_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACannon()
	{
		if (!Z_Registration_Info_UClass_ACannon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACannon.OuterSingleton, Z_Construct_UClass_ACannon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACannon.OuterSingleton;
	}
	template<> MYGAME_API UClass* StaticClass<ACannon>()
	{
		return ACannon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACannon);
	ACannon::~ACannon() {}
	struct Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_Cannon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_Cannon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACannon, ACannon::StaticClass, TEXT("ACannon"), &Z_Registration_Info_UClass_ACannon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACannon), 1670478970U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_Cannon_h_4154998779(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_Cannon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_Cannon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
