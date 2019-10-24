// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FakeWatchProject/FakeWatchProjectHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFakeWatchProjectHUD() {}
// Cross Module References
	FAKEWATCHPROJECT_API UClass* Z_Construct_UClass_AFakeWatchProjectHUD_NoRegister();
	FAKEWATCHPROJECT_API UClass* Z_Construct_UClass_AFakeWatchProjectHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FakeWatchProject();
// End Cross Module References
	void AFakeWatchProjectHUD::StaticRegisterNativesAFakeWatchProjectHUD()
	{
	}
	UClass* Z_Construct_UClass_AFakeWatchProjectHUD_NoRegister()
	{
		return AFakeWatchProjectHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFakeWatchProjectHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFakeWatchProjectHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FakeWatchProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFakeWatchProjectHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FakeWatchProjectHUD.h" },
		{ "ModuleRelativePath", "FakeWatchProjectHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFakeWatchProjectHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFakeWatchProjectHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFakeWatchProjectHUD_Statics::ClassParams = {
		&AFakeWatchProjectHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFakeWatchProjectHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFakeWatchProjectHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFakeWatchProjectHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFakeWatchProjectHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFakeWatchProjectHUD, 3530033398);
	template<> FAKEWATCHPROJECT_API UClass* StaticClass<AFakeWatchProjectHUD>()
	{
		return AFakeWatchProjectHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFakeWatchProjectHUD(Z_Construct_UClass_AFakeWatchProjectHUD, &AFakeWatchProjectHUD::StaticClass, TEXT("/Script/FakeWatchProject"), TEXT("AFakeWatchProjectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFakeWatchProjectHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
