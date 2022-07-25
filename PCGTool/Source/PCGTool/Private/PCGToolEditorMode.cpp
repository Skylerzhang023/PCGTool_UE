// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGToolEditorMode.h"
#include "PCGToolEditorModeToolkit.h"
#include "EdModeInteractiveToolsContext.h"
#include "InteractiveToolManager.h"
#include "PCGToolEditorModeCommands.h"


//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
// AddYourTool Step 1 - include the header file for your Tools here
//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
#include "Tools/PCGToolSimpleTool.h"
#include "Tools/PCGToolInteractiveTool.h"

// step 2: register a ToolBuilder in FPCGToolEditorMode::Enter() below


#define LOCTEXT_NAMESPACE "PCGToolEditorMode"

const FEditorModeID UPCGToolEditorMode::EM_PCGToolEditorModeId = TEXT("EM_PCGToolEditorMode");

FString UPCGToolEditorMode::SimpleToolName = TEXT("PCGTool_ActorInfoTool");
FString UPCGToolEditorMode::InteractiveToolName = TEXT("PCGTool_MeasureDistanceTool");


UPCGToolEditorMode::UPCGToolEditorMode()
{
	FModuleManager::Get().LoadModule("EditorStyle");

	// appearance and icon in the editing mode ribbon can be customized here
	Info = FEditorModeInfo(UPCGToolEditorMode::EM_PCGToolEditorModeId,
		LOCTEXT("ModeName", "PCGTool"),
		FSlateIcon(),
		true);
}


UPCGToolEditorMode::~UPCGToolEditorMode()
{
}


void UPCGToolEditorMode::ActorSelectionChangeNotify()
{
}

void UPCGToolEditorMode::Enter()
{
	UEdMode::Enter();

	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	// AddYourTool Step 2 - register the ToolBuilders for your Tools here.
	// The string name you pass to the ToolManager is used to select/activate your ToolBuilder later.
	//////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////// 
	const FPCGToolEditorModeCommands& SampleToolCommands = FPCGToolEditorModeCommands::Get();

	RegisterTool(SampleToolCommands.SimpleTool, SimpleToolName, NewObject<UPCGToolSimpleToolBuilder>(this));
	RegisterTool(SampleToolCommands.InteractiveTool, InteractiveToolName, NewObject<UPCGToolInteractiveToolBuilder>(this));

	// active tool type is not relevant here, we just set to default
	GetToolManager()->SelectActiveToolType(EToolSide::Left, SimpleToolName);
}

void UPCGToolEditorMode::CreateToolkit()
{
	Toolkit = MakeShareable(new FPCGToolEditorModeToolkit);
}

TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> UPCGToolEditorMode::GetModeCommands() const
{
	return FPCGToolEditorModeCommands::Get().GetCommands();
}

#undef LOCTEXT_NAMESPACE
