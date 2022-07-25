// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGTool/Private/Tools/PCGToolInteractiveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGToolInteractiveTool() {}
// Cross Module References
	PCGTOOL_API UClass* Z_Construct_UClass_UPCGToolInteractiveToolBuilder_NoRegister();
	PCGTOOL_API UClass* Z_Construct_UClass_UPCGToolInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	UPackage* Z_Construct_UPackage__Script_PCGTool();
	PCGTOOL_API UClass* Z_Construct_UClass_UPCGToolInteractiveToolProperties_NoRegister();
	PCGTOOL_API UClass* Z_Construct_UClass_UPCGToolInteractiveToolProperties();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PCGTOOL_API UClass* Z_Construct_UClass_UPCGToolInteractiveTool_NoRegister();
	PCGTOOL_API UClass* Z_Construct_UClass_UPCGToolInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
// End Cross Module References
	void UPCGToolInteractiveToolBuilder::StaticRegisterNativesUPCGToolInteractiveToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGToolInteractiveToolBuilder);
	UClass* Z_Construct_UClass_UPCGToolInteractiveToolBuilder_NoRegister()
	{
		return UPCGToolInteractiveToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPCGToolInteractiveToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGToolInteractiveToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGToolInteractiveToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UPCGToolInteractiveTool\n */" },
		{ "IncludePath", "Tools/PCGToolInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PCGToolInteractiveTool.h" },
		{ "ToolTip", "Builder for UPCGToolInteractiveTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGToolInteractiveToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGToolInteractiveToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGToolInteractiveToolBuilder_Statics::ClassParams = {
		&UPCGToolInteractiveToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPCGToolInteractiveToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolInteractiveToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGToolInteractiveToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UPCGToolInteractiveToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGToolInteractiveToolBuilder.OuterSingleton, Z_Construct_UClass_UPCGToolInteractiveToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGToolInteractiveToolBuilder.OuterSingleton;
	}
	template<> PCGTOOL_API UClass* StaticClass<UPCGToolInteractiveToolBuilder>()
	{
		return UPCGToolInteractiveToolBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGToolInteractiveToolBuilder);
	void UPCGToolInteractiveToolProperties::StaticRegisterNativesUPCGToolInteractiveToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGToolInteractiveToolProperties);
	UClass* Z_Construct_UClass_UPCGToolInteractiveToolProperties_NoRegister()
	{
		return UPCGToolInteractiveToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Property set for the UPCGToolInteractiveTool\n */" },
		{ "IncludePath", "Tools/PCGToolInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PCGToolInteractiveTool.h" },
		{ "ToolTip", "Property set for the UPCGToolInteractiveTool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::NewProp_StartPoint_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** First point of measurement */" },
		{ "ModuleRelativePath", "Private/Tools/PCGToolInteractiveTool.h" },
		{ "ToolTip", "First point of measurement" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPCGToolInteractiveToolProperties, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::NewProp_StartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::NewProp_StartPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::NewProp_EndPoint_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Second point of measurement */" },
		{ "ModuleRelativePath", "Private/Tools/PCGToolInteractiveTool.h" },
		{ "ToolTip", "Second point of measurement" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPCGToolInteractiveToolProperties, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::NewProp_EndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::NewProp_EndPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Current distance measurement */" },
		{ "ModuleRelativePath", "Private/Tools/PCGToolInteractiveTool.h" },
		{ "ToolTip", "Current distance measurement" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPCGToolInteractiveToolProperties, Distance), METADATA_PARAMS(Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::NewProp_Distance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::NewProp_StartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::NewProp_EndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::NewProp_Distance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGToolInteractiveToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::ClassParams = {
		&UPCGToolInteractiveToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGToolInteractiveToolProperties()
	{
		if (!Z_Registration_Info_UClass_UPCGToolInteractiveToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGToolInteractiveToolProperties.OuterSingleton, Z_Construct_UClass_UPCGToolInteractiveToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGToolInteractiveToolProperties.OuterSingleton;
	}
	template<> PCGTOOL_API UClass* StaticClass<UPCGToolInteractiveToolProperties>()
	{
		return UPCGToolInteractiveToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGToolInteractiveToolProperties);
	void UPCGToolInteractiveTool::StaticRegisterNativesUPCGToolInteractiveTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGToolInteractiveTool);
	UClass* Z_Construct_UClass_UPCGToolInteractiveTool_NoRegister()
	{
		return UPCGToolInteractiveTool::StaticClass();
	}
	struct Z_Construct_UClass_UPCGToolInteractiveTool_Statics
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
	UObject* (*const Z_Construct_UClass_UPCGToolInteractiveTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGToolInteractiveTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPCGToolInteractiveTool is an example Tool that allows the user to measure the \n * distance between two points. The first point is set by click-dragging the mouse, and\n * the second point is set by shift-click-dragging the mouse.\n */" },
		{ "IncludePath", "Tools/PCGToolInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PCGToolInteractiveTool.h" },
		{ "ToolTip", "UPCGToolInteractiveTool is an example Tool that allows the user to measure the\ndistance between two points. The first point is set by click-dragging the mouse, and\nthe second point is set by shift-click-dragging the mouse." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPCGToolInteractiveTool_Statics::NewProp_Properties_MetaData[] = {
		{ "Comment", "/** Properties of the tool are stored here */" },
		{ "ModuleRelativePath", "Private/Tools/PCGToolInteractiveTool.h" },
		{ "ToolTip", "Properties of the tool are stored here" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPCGToolInteractiveTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPCGToolInteractiveTool, Properties), Z_Construct_UClass_UPCGToolInteractiveToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPCGToolInteractiveTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolInteractiveTool_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGToolInteractiveTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGToolInteractiveTool_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPCGToolInteractiveTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGToolInteractiveTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGToolInteractiveTool_Statics::ClassParams = {
		&UPCGToolInteractiveTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPCGToolInteractiveTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolInteractiveTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPCGToolInteractiveTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPCGToolInteractiveTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPCGToolInteractiveTool()
	{
		if (!Z_Registration_Info_UClass_UPCGToolInteractiveTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGToolInteractiveTool.OuterSingleton, Z_Construct_UClass_UPCGToolInteractiveTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPCGToolInteractiveTool.OuterSingleton;
	}
	template<> PCGTOOL_API UClass* StaticClass<UPCGToolInteractiveTool>()
	{
		return UPCGToolInteractiveTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGToolInteractiveTool);
	struct Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Private_Tools_PCGToolInteractiveTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Private_Tools_PCGToolInteractiveTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPCGToolInteractiveToolBuilder, UPCGToolInteractiveToolBuilder::StaticClass, TEXT("UPCGToolInteractiveToolBuilder"), &Z_Registration_Info_UClass_UPCGToolInteractiveToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGToolInteractiveToolBuilder), 2422954468U) },
		{ Z_Construct_UClass_UPCGToolInteractiveToolProperties, UPCGToolInteractiveToolProperties::StaticClass, TEXT("UPCGToolInteractiveToolProperties"), &Z_Registration_Info_UClass_UPCGToolInteractiveToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGToolInteractiveToolProperties), 4246376876U) },
		{ Z_Construct_UClass_UPCGToolInteractiveTool, UPCGToolInteractiveTool::StaticClass, TEXT("UPCGToolInteractiveTool"), &Z_Registration_Info_UClass_UPCGToolInteractiveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGToolInteractiveTool), 1055348846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Private_Tools_PCGToolInteractiveTool_h_3163476890(TEXT("/Script/PCGTool"),
		Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Private_Tools_PCGToolInteractiveTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Private_Tools_PCGToolInteractiveTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
