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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_ACannon_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_AMyPawn_Hero();
	MYGAME_API UClass* Z_Construct_UClass_AMyPawn_Hero_NoRegister();
	MYGAME_API UClass* Z_Construct_UClass_APlayerController_Hero_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyGame();
// End Cross Module References
	DEFINE_FUNCTION(AMyPawn_Hero::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPawn_Hero::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	void AMyPawn_Hero::StaticRegisterNativesAMyPawn_Hero()
	{
		UClass* Class = AMyPawn_Hero::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &AMyPawn_Hero::execFire },
			{ "MoveForward", &AMyPawn_Hero::execMoveForward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPawn_Hero_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_Hero_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPawn_Hero.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_Hero_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn_Hero, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Hero_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_Hero_Fire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyPawn_Hero_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_Hero_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPawn_Hero_MoveForward_Statics
	{
		struct MyPawn_Hero_eventMoveForward_Parms
		{
			float AxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyPawn_Hero_MoveForward_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_Hero_eventMoveForward_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_Hero_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_Hero_MoveForward_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPawn_Hero_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPawn_Hero.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_Hero_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn_Hero, nullptr, "MoveForward", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_Hero_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Hero_MoveForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_Hero_MoveForward_Statics::MyPawn_Hero_eventMoveForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Hero_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_Hero_MoveForward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Hero_MoveForward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyPawn_Hero_MoveForward_Statics::MyPawn_Hero_eventMoveForward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyPawn_Hero_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_Hero_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPawn_Hero);
	UClass* Z_Construct_UClass_AMyPawn_Hero_NoRegister()
	{
		return AMyPawn_Hero::StaticClass();
	}
	struct Z_Construct_UClass_AMyPawn_Hero_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponRotationInterpolationKey_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponRotationInterpolationKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonSetupPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CannonSetupPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CannonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cannon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cannon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPawn_Hero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_MyGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPawn_Hero_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPawn_Hero_Fire, "Fire" }, // 3849162437
		{ &Z_Construct_UFunction_AMyPawn_Hero_MoveForward, "MoveForward" }, // 919728568
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::FuncInfo) < 2048);
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPawn_Hero.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn_Hero, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_SpringArm_MetaData), Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_SpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movment|Speed" },
		{ "ModuleRelativePath", "MyPawn_Hero.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn_Hero, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_MoveSpeed_MetaData), Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_MoveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_WeaponRotationInterpolationKey_MetaData[] = {
		{ "Category", "Weapon|interp|speed" },
		{ "ModuleRelativePath", "MyPawn_Hero.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_WeaponRotationInterpolationKey = { "WeaponRotationInterpolationKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn_Hero, WeaponRotationInterpolationKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_WeaponRotationInterpolationKey_MetaData), Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_WeaponRotationInterpolationKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "MyPawn_Hero.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn_Hero, PlayerController), Z_Construct_UClass_APlayerController_Hero_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_PlayerController_MetaData), Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_PlayerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CannonSetupPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPawn_Hero.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CannonSetupPoint = { "CannonSetupPoint", nullptr, (EPropertyFlags)0x00100000000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn_Hero, CannonSetupPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CannonSetupPoint_MetaData), Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CannonSetupPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CannonClass_MetaData[] = {
		{ "Category", "Weapon|Cannon" },
		{ "ModuleRelativePath", "MyPawn_Hero.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CannonClass = { "CannonClass", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn_Hero, CannonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACannon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CannonClass_MetaData), Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CannonClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_Cannon_MetaData[] = {
		{ "ModuleRelativePath", "MyPawn_Hero.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_Cannon = { "Cannon", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn_Hero, Cannon), Z_Construct_UClass_ACannon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_Cannon_MetaData), Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_Cannon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPawn_Hero_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_BodyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_WeaponMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_BoxCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_WeaponRotationInterpolationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CannonSetupPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_CannonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Hero_Statics::NewProp_Cannon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPawn_Hero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawn_Hero>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPawn_Hero_Statics::ClassParams = {
		&AMyPawn_Hero::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPawn_Hero_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AMyPawn_Hero, AMyPawn_Hero::StaticClass, TEXT("AMyPawn_Hero"), &Z_Registration_Info_UClass_AMyPawn_Hero, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPawn_Hero), 416417173U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_MyPawn_Hero_h_948110089(TEXT("/Script/MyGame"),
		Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_MyPawn_Hero_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_my_pers_project_project_game_MyGame_Source_MyGame_MyPawn_Hero_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
