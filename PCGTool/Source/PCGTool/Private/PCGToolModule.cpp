// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGToolModule.h"
#include "PCGToolEditorModeCommands.h"

#define LOCTEXT_NAMESPACE "PCGToolModule"

void FPCGToolModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FPCGToolEditorModeCommands::Register();
}

void FPCGToolModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	FPCGToolEditorModeCommands::Unregister();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FPCGToolModule, PCGToolEditorMode)