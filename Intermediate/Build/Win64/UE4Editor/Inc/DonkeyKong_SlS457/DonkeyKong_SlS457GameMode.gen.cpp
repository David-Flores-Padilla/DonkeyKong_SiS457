// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SlS457/DonkeyKong_SlS457GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDonkeyKong_SlS457GameMode() {}
// Cross Module References
	DONKEYKONG_SLS457_API UClass* Z_Construct_UClass_ADonkeyKong_SlS457GameMode_NoRegister();
	DONKEYKONG_SLS457_API UClass* Z_Construct_UClass_ADonkeyKong_SlS457GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SlS457();
// End Cross Module References
	void ADonkeyKong_SlS457GameMode::StaticRegisterNativesADonkeyKong_SlS457GameMode()
	{
	}
	UClass* Z_Construct_UClass_ADonkeyKong_SlS457GameMode_NoRegister()
	{
		return ADonkeyKong_SlS457GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADonkeyKong_SlS457GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADonkeyKong_SlS457GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SlS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADonkeyKong_SlS457GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DonkeyKong_SlS457GameMode.h" },
		{ "ModuleRelativePath", "DonkeyKong_SlS457GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADonkeyKong_SlS457GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADonkeyKong_SlS457GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADonkeyKong_SlS457GameMode_Statics::ClassParams = {
		&ADonkeyKong_SlS457GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADonkeyKong_SlS457GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADonkeyKong_SlS457GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADonkeyKong_SlS457GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADonkeyKong_SlS457GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADonkeyKong_SlS457GameMode, 830381358);
	template<> DONKEYKONG_SLS457_API UClass* StaticClass<ADonkeyKong_SlS457GameMode>()
	{
		return ADonkeyKong_SlS457GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADonkeyKong_SlS457GameMode(Z_Construct_UClass_ADonkeyKong_SlS457GameMode, &ADonkeyKong_SlS457GameMode::StaticClass, TEXT("/Script/DonkeyKong_SlS457"), TEXT("ADonkeyKong_SlS457GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADonkeyKong_SlS457GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif