// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UdemyUE5IntroProject/UdemyUE5IntroProjectCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdemyUE5IntroProjectCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UDEMYUE5INTROPROJECT_API UClass* Z_Construct_UClass_AUdemyUE5IntroProjectCharacter();
	UDEMYUE5INTROPROJECT_API UClass* Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UdemyUE5IntroProject();
// End Cross Module References
	void AUdemyUE5IntroProjectCharacter::StaticRegisterNativesAUdemyUE5IntroProjectCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUdemyUE5IntroProjectCharacter);
	UClass* Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_NoRegister()
	{
		return AUdemyUE5IntroProjectCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UdemyUE5IntroProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UdemyUE5IntroProjectCharacter.h" },
		{ "ModuleRelativePath", "UdemyUE5IntroProjectCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UdemyUE5IntroProjectCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUdemyUE5IntroProjectCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UdemyUE5IntroProjectCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUdemyUE5IntroProjectCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "UdemyUE5IntroProjectCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUdemyUE5IntroProjectCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "UdemyUE5IntroProjectCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUdemyUE5IntroProjectCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "UdemyUE5IntroProjectCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUdemyUE5IntroProjectCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "UdemyUE5IntroProjectCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUdemyUE5IntroProjectCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_LookAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::NewProp_LookAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUdemyUE5IntroProjectCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::ClassParams = {
		&AUdemyUE5IntroProjectCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUdemyUE5IntroProjectCharacter()
	{
		if (!Z_Registration_Info_UClass_AUdemyUE5IntroProjectCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUdemyUE5IntroProjectCharacter.OuterSingleton, Z_Construct_UClass_AUdemyUE5IntroProjectCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUdemyUE5IntroProjectCharacter.OuterSingleton;
	}
	template<> UDEMYUE5INTROPROJECT_API UClass* StaticClass<AUdemyUE5IntroProjectCharacter>()
	{
		return AUdemyUE5IntroProjectCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUdemyUE5IntroProjectCharacter);
	AUdemyUE5IntroProjectCharacter::~AUdemyUE5IntroProjectCharacter() {}
	struct Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UdemyUE5IntroProject_Source_UdemyUE5IntroProject_UdemyUE5IntroProjectCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UdemyUE5IntroProject_Source_UdemyUE5IntroProject_UdemyUE5IntroProjectCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUdemyUE5IntroProjectCharacter, AUdemyUE5IntroProjectCharacter::StaticClass, TEXT("AUdemyUE5IntroProjectCharacter"), &Z_Registration_Info_UClass_AUdemyUE5IntroProjectCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUdemyUE5IntroProjectCharacter), 3763943891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UdemyUE5IntroProject_Source_UdemyUE5IntroProject_UdemyUE5IntroProjectCharacter_h_3647049226(TEXT("/Script/UdemyUE5IntroProject"),
		Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UdemyUE5IntroProject_Source_UdemyUE5IntroProject_UdemyUE5IntroProjectCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UdemyUE5IntroProject_Source_UdemyUE5IntroProject_UdemyUE5IntroProjectCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
