// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGTool/Public/PCGToolEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGToolEditorMode() {}
// Cross Module References
	PCGTOOL_API UClass* Z_Construct_UClass_UPCGToolEditorMode_NoRegister();
	PCGTOOL_API UClass* Z_Construct_UClass_UPCGToolEditorMode();
	UNREALED_API UClass* Z_Construct_UClass_UEdMode();
	UPackage* Z_Construct_UPackage__Script_PCGTool();
// End Cross Module References
	void UPCGToolEditorMode::StaticRegisterNativesUPCGToolEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGToolEditorMode);
	UClass* Z_Construct_UClass_UPCGToolEditorMode_NoRegister()
	{
		return UPCGToolEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UPCGToolEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGToolEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGToolEditorMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class provides an example of how to extend a UEdMode to add some simple tools\n * using the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\n * forward events to a UEdModeInteractiveToolsContext instance, which\n * has all the logic for interacting with the InputRouter, ToolManager, etc.\n * The functions provided here are the minimum to get started inserting some custom behavior.\n * Take a look at the UEdMode markup for more extensibility options.\n */" },
		{ "IncludePath", "PCGToolEditorMode.h" },
		{ "ModuleRelativePath", "Public/PCGToolEditorMode.h" },
		{ "ToolTip", "This class provides an example of how to extend a UEdMode to add some simple tools\nusing the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\nforward events to a UEdModeInteractiveToolsContext instance, which\nhas all the logic for interacting with the InputRouter, ToolManager, etc.\nThe functions provided here are the minimum to get started inserting some custom behavior.\nTake a look at the UEdMode markup for more extensibility options." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGToolEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGToolEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGToolEditorMode_Statics::ClassParams = {
		&UPCGToolEditorMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGToolEditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolEditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGToolEditorMode()
	{
		if (!Z_Registration_Info_UClass_UPCGToolEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGToolEditorMode.OuterSingleton, Z_Construct_UClass_UPCGToolEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGToolEditorMode.OuterSingleton;
	}
	template<> PCGTOOL_API UClass* StaticClass<UPCGToolEditorMode>()
	{
		return UPCGToolEditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGToolEditorMode);
	struct Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Public_PCGToolEditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Public_PCGToolEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGToolEditorMode, UPCGToolEditorMode::StaticClass, TEXT("UPCGToolEditorMode"), &Z_Registration_Info_UClass_UPCGToolEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGToolEditorMode), 3346074389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Public_PCGToolEditorMode_h_3910879011(TEXT("/Script/PCGTool"),
		Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Public_PCGToolEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Public_PCGToolEditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
