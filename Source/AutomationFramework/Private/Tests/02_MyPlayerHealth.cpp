#include "Misc/AutomationTest.h"
#include "Tests/AutomationEditorCommon.h"

#include "AutomationFramework/Private/01-SimpleTest/MyPlayer.h"

// this is my declaration macro
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FCheckMaxPlayerHealth, "TestSample.Sample01.Check Max Player Health", EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)

// this hold my test functionality
bool FCheckMaxPlayerHealth::RunTest(const FString& Parameters)
{
	// create empty world
	UWorld* World = FAutomationEditorCommonUtils::CreateNewMap();

	// create player
	AMyPlayer* player = World->SpawnActor<AMyPlayer>();
	
	// asserts
	if (player->GetHealth() != player->GetMaxHealth())
	{
		AddError( TEXT("Player max health is not set to 100!"));
	}
	
	// dispose
	player->Destroy();
	return true;
}
