#include "OverlapCheckBase.h"
#include "Templates/SubclassOf.h"

AOverlapCheckBase::AOverlapCheckBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultOverlapType = OverlapType::Simple;
    this->DetectionRadius = 10.00f;
    this->LineThickness = 0.50f;
    this->SegementCount = 32;
}

void AOverlapCheckBase::RemoveActorFromOverlapList(const AActor* actorToRemove) {
}

bool AOverlapCheckBase::NarrowPhaseOverlapSingleActor(const AActor* Actor) const {
    return false;
}

bool AOverlapCheckBase::NarrowPhaseOverlapSingle(int32 Index) const {
    return false;
}

bool AOverlapCheckBase::NarrowPhaseOverlapAny() const {
    return false;
}

bool AOverlapCheckBase::IsOverlappingSingle(int32 Index) const {
    return false;
}

bool AOverlapCheckBase::IsOverlappingPrimitiveComponent(const UPrimitiveComponent* Primitive) const {
    return false;
}

bool AOverlapCheckBase::IsOverlappingAny() const {
    return false;
}

TArray<AActor*> AOverlapCheckBase::GetOverlappingActorsByClass(TSubclassOf<AActor> ClassFilter) const {
    return TArray<AActor*>();
}

bool AOverlapCheckBase::BroadPhaseOverlapSingleActor(const AActor* Actor) const {
    return false;
}

bool AOverlapCheckBase::BroadPhaseOverlapSingle(int32 Index) const {
    return false;
}

bool AOverlapCheckBase::BroadPhaseOverlapAny() const {
    return false;
}

void AOverlapCheckBase::AddActorToOverlapList(const AActor* NewActor) {
}


