// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGToolEditorModeToolkit.h"
#include "PCGToolEditorMode.h"
#include "Engine/Selection.h"

#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "EditorModeManager.h"

#define LOCTEXT_NAMESPACE "PCGToolEditorModeToolkit"

FPCGToolEditorModeToolkit::FPCGToolEditorModeToolkit()
{
}

void FPCGToolEditorModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost, TWeakObjectPtr<UEdMode> InOwningMode)
{
	FModeToolkit::Init(InitToolkitHost, InOwningMode);
}

void FPCGToolEditorModeToolkit::GetToolPaletteNames(TArray<FName>& PaletteNames) const
{
	PaletteNames.Add(NAME_Default);
}


FName FPCGToolEditorModeToolkit::GetToolkitFName() const
{
	return FName("PCGToolEditorMode");
}

FText FPCGToolEditorModeToolkit::GetBaseToolkitName() const
{
	return LOCTEXT("DisplayName", "PCGToolEditorMode Toolkit");
}

#undef LOCTEXT_NAMESPACE
