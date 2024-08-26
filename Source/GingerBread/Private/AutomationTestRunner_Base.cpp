#include "AutomationTestRunner_Base.h"

AAutomationTestRunner_Base::AAutomationTestRunner_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AAutomationTestRunner_Base::StartMap() {
}

void AAutomationTestRunner_Base::EndMap(const FString& reason) {
}

void AAutomationTestRunner_Base::BeginVideoRecording() {
}

void AAutomationTestRunner_Base::AddTest(const FString& testName) {
}

void AAutomationTestRunner_Base::AddSection(const FString& sectionName) {
}

void AAutomationTestRunner_Base::AddResult(const FString& resultName, const FString& resultDescription, const bool resultOutcome, const float resultTime) {
}


