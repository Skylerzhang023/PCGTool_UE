// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGToolEditorModeCommands.h"
#include "PCGToolEditorMode.h"
#include "EditorStyleSet.h"

#define LOCTEXT_NAMESPACE "PCGToolEditorModeCommands"

FPCGToolEditorModeCommands::FPCGToolEditorModeCommands()
	: TCommands<FPCGToolEditorModeCommands>("PCGToolEditorMode",
		NSLOCTEXT("PCGToolEditorMode", "PCGToolEditorModeCommands", "PCGTool Editor Mode"),
		NAME_None,
		FEditorStyle::GetStyleSetName())
{
}

void FPCGToolEditorModeCommands::RegisterCommands()
{
	TArray <TSharedPtr<FUICommandInfo>>& ToolCommands = Commands.FindOrAdd(NAME_Default);

	UI_COMMAND(SimpleTool, "Show Actor Info", "Opens message box with info about a clicked actor", EUserInterfaceActionType::Button, FInputChord());
	ToolCommands.Add(SimpleTool);

	UI_COMMAND(InteractiveTool, "Measure Distance", "Measures distance between 2 points (click to set origin, shift-click to set end point)", EUserInterfaceActionType::ToggleButton, FInputChord());
	ToolCommands.Add(InteractiveTool);
}

TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> FPCGToolEditorModeCommands::GetCommands()
{
	return FPCGToolEditorModeCommands::Get().Commands;
}

#undef LOCTEXT_NAMESPACE
