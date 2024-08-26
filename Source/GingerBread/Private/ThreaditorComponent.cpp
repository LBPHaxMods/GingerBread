#include "ThreaditorComponent.h"

UThreaditorComponent::UThreaditorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetPrimitiveA = NULL;
    this->TargetPrimitiveB = NULL;
    this->TargetA = NULL;
    this->TargetB = NULL;
    this->Length = 40.00f;
    this->Deletable = false;
    this->Cuttable = true;
    this->GenerateSplitEvents = true;
    this->bCreateThreadOnBegin = true;
    this->bAutoSize = false;
    this->ThreadMaterial = NULL;
    this->VisualSubdivide = 0;
    this->VisualSideCount = 8;
    this->VisualWidthScale = 2.00f;
    this->TileMaterial = 1.00f;
    this->CreateTarget = false;
    this->bCreateTargetOnSplitThreads = false;
    this->ActivationRange = 100.00f;
    this->LookAtAngleTolerance = 45.00f;
    this->LookAtAngleToleranceVertical = 90.00f;
    this->bDisplayAttachPoints = false;
    this->DynamicThreadMaterial = NULL;
}

void UThreaditorComponent::SpawnThread() {
}

Asackthread* UThreaditorComponent::GetThread() {
    return NULL;
}

void UThreaditorComponent::DestroyThread() {
}

void UThreaditorComponent::CreateCraftCutterTarget(Asackthread* Thread) {
}

void UThreaditorComponent::AttachAtPosition(UPrimitiveComponent* BodyA, UPrimitiveComponent* BodyB, FVector WorldPosA, FVector WorldPosB) {
}

void UThreaditorComponent::Attach(UPrimitiveComponent* BodyA, UPrimitiveComponent* BodyB) {
}


