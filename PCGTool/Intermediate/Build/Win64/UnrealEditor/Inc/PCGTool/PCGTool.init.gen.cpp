// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePCGTool_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PCGTool;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PCGTool()
	{
		if (!Z_Registration_Info_UPackage__Script_PCGTool.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PCGTool",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x5AC89F78,
				0x83D52CFB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PCGTool.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PCGTool.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PCGTool(Z_Construct_UPackage__Script_PCGTool, TEXT("/Script/PCGTool"), Z_Registration_Info_UPackage__Script_PCGTool, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5AC89F78, 0x83D52CFB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
