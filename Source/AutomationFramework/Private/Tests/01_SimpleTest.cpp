#include "Misc/AutomationTest.h"

// this is my declaration macro
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FSimpleTest, "TestSample.Sample01.CheckDistance", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

// this hold my test functionality
bool FSimpleTest::RunTest(const FString& Parameters)
{
	// get data
	FVector pointA = FVector(0,0,0);
	FVector pointB = FVector(0,0,10);
	FVector difference = pointB - pointA;

	// calculate distance
	float distance = difference.Length();
	
	// assert
	TestEqual(TEXT("Distance is 10"), distance, 10.0f);
	
	return true;
}
