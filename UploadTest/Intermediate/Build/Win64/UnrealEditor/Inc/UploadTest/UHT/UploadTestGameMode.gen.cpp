// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UploadTest/UploadTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUploadTestGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UploadTest();
	UPLOADTEST_API UClass* Z_Construct_UClass_AUploadTestGameMode();
	UPLOADTEST_API UClass* Z_Construct_UClass_AUploadTestGameMode_NoRegister();
// End Cross Module References
	void AUploadTestGameMode::StaticRegisterNativesAUploadTestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUploadTestGameMode);
	UClass* Z_Construct_UClass_AUploadTestGameMode_NoRegister()
	{
		return AUploadTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUploadTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUploadTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UploadTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUploadTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UploadTestGameMode.h" },
		{ "ModuleRelativePath", "UploadTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUploadTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUploadTestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUploadTestGameMode_Statics::ClassParams = {
		&AUploadTestGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUploadTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUploadTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUploadTestGameMode()
	{
		if (!Z_Registration_Info_UClass_AUploadTestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUploadTestGameMode.OuterSingleton, Z_Construct_UClass_AUploadTestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUploadTestGameMode.OuterSingleton;
	}
	template<> UPLOADTEST_API UClass* StaticClass<AUploadTestGameMode>()
	{
		return AUploadTestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUploadTestGameMode);
	AUploadTestGameMode::~AUploadTestGameMode() {}
	struct Z_CompiledInDeferFile_FID_UploadTest_Source_UploadTest_UploadTestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UploadTest_Source_UploadTest_UploadTestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUploadTestGameMode, AUploadTestGameMode::StaticClass, TEXT("AUploadTestGameMode"), &Z_Registration_Info_UClass_AUploadTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUploadTestGameMode), 3632541916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UploadTest_Source_UploadTest_UploadTestGameMode_h_479234215(TEXT("/Script/UploadTest"),
		Z_CompiledInDeferFile_FID_UploadTest_Source_UploadTest_UploadTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UploadTest_Source_UploadTest_UploadTestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
