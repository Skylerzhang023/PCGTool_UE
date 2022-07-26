// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCGTool/Private/PCGSplineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGSplineComponent() {}
// Cross Module References
	PCGTOOL_API UClass* Z_Construct_UClass_UPcgSplineComponent_NoRegister();
	PCGTOOL_API UClass* Z_Construct_UClass_UPcgSplineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	UPackage* Z_Construct_UPackage__Script_PCGTool();
// End Cross Module References
	void UPcgSplineComponent::StaticRegisterNativesUPcgSplineComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPcgSplineComponent);
	UClass* Z_Construct_UClass_UPcgSplineComponent_NoRegister()
	{
		return UPcgSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPcgSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPcgSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PCGTool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPcgSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "PCGSplineComponent.h" },
		{ "ModuleRelativePath", "Private/PCGSplineComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPcgSplineComponent_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "PCG" },
		{ "ModuleRelativePath", "Private/PCGSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPcgSplineComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPcgSplineComponent, Speed), METADATA_PARAMS(Z_Construct_UClass_UPcgSplineComponent_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPcgSplineComponent_Statics::NewProp_Speed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPcgSplineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPcgSplineComponent_Statics::NewProp_Speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPcgSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPcgSplineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPcgSplineComponent_Statics::ClassParams = {
		&UPcgSplineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPcgSplineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPcgSplineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPcgSplineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPcgSplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPcgSplineComponent()
	{
		if (!Z_Registration_Info_UClass_UPcgSplineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPcgSplineComponent.OuterSingleton, Z_Construct_UClass_UPcgSplineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPcgSplineComponent.OuterSingleton;
	}
	template<> PCGTOOL_API UClass* StaticClass<UPcgSplineComponent>()
	{
		return UPcgSplineComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPcgSplineComponent);
	struct Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Private_PCGSplineComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Private_PCGSplineComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPcgSplineComponent, UPcgSplineComponent::StaticClass, TEXT("UPcgSplineComponent"), &Z_Registration_Info_UClass_UPcgSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPcgSplineComponent), 3150436127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Private_PCGSplineComponent_h_1009198094(TEXT("/Script/PCGTool"),
		Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Private_PCGSplineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_city_sample_Plugins_PCGTool_Source_PCGTool_Private_PCGSplineComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
