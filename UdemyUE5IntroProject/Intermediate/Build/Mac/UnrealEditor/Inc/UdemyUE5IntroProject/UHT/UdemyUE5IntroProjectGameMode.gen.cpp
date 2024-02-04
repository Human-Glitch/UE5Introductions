// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UdemyUE5IntroProject/UdemyUE5IntroProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdemyUE5IntroProjectGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UDEMYUE5INTROPROJECT_API UClass* Z_Construct_UClass_AUdemyUE5IntroProjectGameMode();
	UDEMYUE5INTROPROJECT_API UClass* Z_Construct_UClass_AUdemyUE5IntroProjectGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UdemyUE5IntroProject();
// End Cross Module References
	void AUdemyUE5IntroProjectGameMode::StaticRegisterNativesAUdemyUE5IntroProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUdemyUE5IntroProjectGameMode);
	UClass* Z_Construct_UClass_AUdemyUE5IntroProjectGameMode_NoRegister()
	{
		return AUdemyUE5IntroProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUdemyUE5IntroProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUdemyUE5IntroProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UdemyUE5IntroProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemyUE5IntroProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UdemyUE5IntroProjectGameMode.h" },
		{ "ModuleRelativePath", "UdemyUE5IntroProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUdemyUE5IntroProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUdemyUE5IntroProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUdemyUE5IntroProjectGameMode_Statics::ClassParams = {
		&AUdemyUE5IntroProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUdemyUE5IntroProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUdemyUE5IntroProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUdemyUE5IntroProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_AUdemyUE5IntroProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUdemyUE5IntroProjectGameMode.OuterSingleton, Z_Construct_UClass_AUdemyUE5IntroProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUdemyUE5IntroProjectGameMode.OuterSingleton;
	}
	template<> UDEMYUE5INTROPROJECT_API UClass* StaticClass<AUdemyUE5IntroProjectGameMode>()
	{
		return AUdemyUE5IntroProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUdemyUE5IntroProjectGameMode);
	AUdemyUE5IntroProjectGameMode::~AUdemyUE5IntroProjectGameMode() {}
	struct Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UdemyUE5IntroProject_UdemyUE5IntroProject_Source_UdemyUE5IntroProject_UdemyUE5IntroProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UdemyUE5IntroProject_UdemyUE5IntroProject_Source_UdemyUE5IntroProject_UdemyUE5IntroProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUdemyUE5IntroProjectGameMode, AUdemyUE5IntroProjectGameMode::StaticClass, TEXT("AUdemyUE5IntroProjectGameMode"), &Z_Registration_Info_UClass_AUdemyUE5IntroProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUdemyUE5IntroProjectGameMode), 1551278271U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UdemyUE5IntroProject_UdemyUE5IntroProject_Source_UdemyUE5IntroProject_UdemyUE5IntroProjectGameMode_h_698181747(TEXT("/Script/UdemyUE5IntroProject"),
		Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UdemyUE5IntroProject_UdemyUE5IntroProject_Source_UdemyUE5IntroProject_UdemyUE5IntroProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kodybuss_Unreal_Projects_UdemyUE5IntroProject_UdemyUE5IntroProject_Source_UdemyUE5IntroProject_UdemyUE5IntroProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
