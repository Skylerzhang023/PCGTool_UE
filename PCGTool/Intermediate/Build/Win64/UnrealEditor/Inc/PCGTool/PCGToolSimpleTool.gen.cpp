// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGTool/Private/Tools/PCGToolSimpleTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGToolSimpleTool() {}
// Cross Module References
	PCGTOOL_API UClass* Z_Construct_UClass_UPCGToolSimpleToolBuilder_NoRegister();
	PCGTOOL_API UClass* Z_Construct_UClass_UPCGToolSimpleToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	UPackage* Z_Construct_UPackage__Script_PCGTool();
	PCGTOOL_API UClass* Z_Construct_UClass_UPCGToolSimpleToolProperties_NoRegister();
	PCGTOOL_API UClass* Z_Construct_UClass_UPCGToolSimpleToolProperties();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	PCGTOOL_API UClass* Z_Construct_UClass_UPCGToolSimpleTool_NoRegister();
	PCGTOOL_API UClass* Z_Construct_UClass_UPCGToolSimpleTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
// End Cross Module References
	void UPCGToolSimpleToolBuilder::StaticRegisterNativesUPCGToolSimpleToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGToolSimpleToolBuilder);
	UClass* Z_Construct_UClass_UPCGToolSimpleToolBuilder_NoRegister()
	{
		return UPCGToolSimpleToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPCGToolSimpleToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGToolSimpleToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGToolSimpleToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UPCGToolSimpleTool\n */" },
		{ "IncludePath", "Tools/PCGToolSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PCGToolSimpleTool.h" },
		{ "ToolTip", "Builder for UPCGToolSimpleTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGToolSimpleToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGToolSimpleToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGToolSimpleToolBuilder_Statics::ClassParams = {
		&UPCGToolSimpleToolBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGToolSimpleToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolSimpleToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGToolSimpleToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UPCGToolSimpleToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGToolSimpleToolBuilder.OuterSingleton, Z_Construct_UClass_UPCGToolSimpleToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGToolSimpleToolBuilder.OuterSingleton;
	}
	template<> PCGTOOL_API UClass* StaticClass<UPCGToolSimpleToolBuilder>()
	{
		return UPCGToolSimpleToolBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGToolSimpleToolBuilder);
	void UPCGToolSimpleToolProperties::StaticRegisterNativesUPCGToolSimpleToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGToolSimpleToolProperties);
	UClass* Z_Construct_UClass_UPCGToolSimpleToolProperties_NoRegister()
	{
		return UPCGToolSimpleToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowExtendedInfo_MetaData[];
#endif
		static void NewProp_ShowExtendedInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowExtendedInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings UObject for UPCGToolSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\n * which provides an OnModified delegate that the Tool will listen to for changes in property values.\n */" },
		{ "IncludePath", "Tools/PCGToolSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PCGToolSimpleTool.h" },
		{ "ToolTip", "Settings UObject for UPCGToolSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\nwhich provides an OnModified delegate that the Tool will listen to for changes in property values." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown. */" },
		{ "DisplayName", "Show Extended Info" },
		{ "ModuleRelativePath", "Private/Tools/PCGToolSimpleTool.h" },
		{ "ToolTip", "If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown." },
	};
#endif
	void Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit(void* Obj)
	{
		((UPCGToolSimpleToolProperties*)Obj)->ShowExtendedInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::NewProp_ShowExtendedInfo = { "ShowExtendedInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPCGToolSimpleToolProperties), &Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::NewProp_ShowExtendedInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGToolSimpleToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::ClassParams = {
		&UPCGToolSimpleToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGToolSimpleToolProperties()
	{
		if (!Z_Registration_Info_UClass_UPCGToolSimpleToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGToolSimpleToolProperties.OuterSingleton, Z_Construct_UClass_UPCGToolSimpleToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGToolSimpleToolProperties.OuterSingleton;
	}
	template<> PCGTOOL_API UClass* StaticClass<UPCGToolSimpleToolProperties>()
	{
		return UPCGToolSimpleToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGToolSimpleToolProperties);
	void UPCGToolSimpleTool::StaticRegisterNativesUPCGToolSimpleTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGToolSimpleTool);
	UClass* Z_Construct_UClass_UPCGToolSimpleTool_NoRegister()
	{
		return UPCGToolSimpleTool::StaticClass();
	}
	struct Z_Construct_UClass_UPCGToolSimpleTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGToolSimpleTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleClickTool,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGToolSimpleTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPCGToolSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\n * clicks left mouse button. All the action is in the ::OnClicked handler.\n */" },
		{ "IncludePath", "Tools/PCGToolSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PCGToolSimpleTool.h" },
		{ "ToolTip", "UPCGToolSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\nclicks left mouse button. All the action is in the ::OnClicked handler." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGToolSimpleTool_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tools/PCGToolSimpleTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGToolSimpleTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPCGToolSimpleTool, Properties), Z_Construct_UClass_UPCGToolSimpleToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGToolSimpleTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolSimpleTool_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGToolSimpleTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGToolSimpleTool_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGToolSimpleTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGToolSimpleTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGToolSimpleTool_Statics::ClassParams = {
		&UPCGToolSimpleTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGToolSimpleTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolSimpleTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGToolSimpleTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolSimpleTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGToolSimpleTool()
	{
		if (!Z_Registration_Info_UClass_UPCGToolSimpleTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGToolSimpleTool.OuterSingleton, Z_Construct_UClass_UPCGToolSimpleTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGToolSimpleTool.OuterSingleton;
	}
	template<> PCGTOOL_API UClass* StaticClass<UPCGToolSimpleTool>()
	{
		return UPCGToolSimpleTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGToolSimpleTool);
	struct Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Private_Tools_PCGToolSimpleTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Private_Tools_PCGToolSimpleTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGToolSimpleToolBuilder, UPCGToolSimpleToolBuilder::StaticClass, TEXT("UPCGToolSimpleToolBuilder"), &Z_Registration_Info_UClass_UPCGToolSimpleToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGToolSimpleToolBuilder), 1996706809U) },
		{ Z_Construct_UClass_UPCGToolSimpleToolProperties, UPCGToolSimpleToolProperties::StaticClass, TEXT("UPCGToolSimpleToolProperties"), &Z_Registration_Info_UClass_UPCGToolSimpleToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGToolSimpleToolProperties), 1883823375U) },
		{ Z_Construct_UClass_UPCGToolSimpleTool, UPCGToolSimpleTool::StaticClass, TEXT("UPCGToolSimpleTool"), &Z_Registration_Info_UClass_UPCGToolSimpleTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGToolSimpleTool), 505358109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Private_Tools_PCGToolSimpleTool_h_3740920179(TEXT("/Script/PCGTool"),
		Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Private_Tools_PCGToolSimpleTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Private_Tools_PCGToolSimpleTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
