#include "sackthread.h"
#include "RopeMeshComponent.h"
#include "SackThreadBodyChain.h"

Asackthread::Asackthread(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<URopeMeshComponent>(TEXT("RopeMesh"));
    this->EditorTargetA = NULL;
    this->EditorTargetB = NULL;
    this->EditorTargetPrimitiveA = NULL;
    this->EditorTargetPrimitiveB = NULL;
    this->Rebuild = false;
    this->Deletable = false;
    this->Cuttable = true;
    this->GenerateSplitEvents = true;
    this->ThreadMaterial = NULL;
    this->DynamicMaterial = NULL;
    this->VisualSubdivide = 0;
    this->VisualSideCount = 8;
    this->VisualWidthScale = 2.00f;
    this->TileMaterial = 1.00f;
    this->MaxDistance = 40.00f;
    this->SnapThreshold = 1000.00f;
    this->ThreadStretchLimit = 30.00f;
    this->bCreateMainSupportJoint = true;
    this->bCreateTargetOnSplitThreads = false;
    this->bTargetActivationRange = 50.00f;
    this->TargetLookAtToleranceHorizontal = 35.00f;
    this->TargetLookAtToleranceVertical = 10.00f;
    this->CraftCutterTarget = NULL;
    this->bDebugDrawThread = false;
    this->bDebugDrawSupports = false;
    this->bDebugDrawMainJoint = false;
    this->bDebugDrawBodies = false;
    this->bShowConstraintForces = false;
    this->ReelOutJointBreakThreshold = 3.00f;
    this->ReelInJointBreakThreshold = 1000.00f;
    this->MinimumReelInLength = 5.00f;
    this->TargetA = NULL;
    this->TargetB = NULL;
    this->RopeMesh = (URopeMeshComponent*)RootComponent;
    this->bDrawRopeMesh = true;
    this->BodyChain = CreateDefaultSubobject<USackThreadBodyChain>(TEXT("BodyChain"));
    this->Joint = NULL;
    this->EditorInitialised = false;
}

void Asackthread::SplitDetachB() {
}

void Asackthread::SplitDetachA() {
}

Asackthread* Asackthread::SplitAtLocation(const FVector& Location) {
    return NULL;
}

Asackthread* Asackthread::Split(AJointProxyBody* Body) {
    return NULL;
}

void Asackthread::SetSleep(bool Sleep) {
}

void Asackthread::ReelOut(float Distance) {
}

bool Asackthread::ReelIn(float reel_rate, float max_force_threshold) {
    return false;
}

bool Asackthread::OwnsProxy(AJointProxyBody* Proxy) const {
    return false;
}

bool Asackthread::OwnsPrimitive(UPrimitiveComponent* prim) const {
    return false;
}



void Asackthread::OnPrimitiveDestroyed(AActor* DestroyedActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void Asackthread::Highlight() {
}

UPrimitiveComponent* Asackthread::GetThreadStartObject() const {
    return NULL;
}

UPrimitiveComponent* Asackthread::GetThreadEndObject() const {
    return NULL;
}

void Asackthread::GetBodies(TArray<AJointProxyBody*>& Bodies) const {
}

void Asackthread::DisableShadows() {
}

void Asackthread::DisableCollisions() {
}

void Asackthread::DestroyThread() {
}

void Asackthread::CreateCraftCutterTarget(bool create_target_on_split_threads, float activation_range, float look_at_angle_tolerance_horizontal, float look_at_angle_tolerance_vertical) {
}


