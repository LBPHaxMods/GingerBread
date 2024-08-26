#include "Zone.h"

AZone::AZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NarrativeTrigger = NULL;
    this->Wall = NULL;
    this->OrbGate = NULL;
    this->LockedPreviewCamera = NULL;
    this->ZoneDebugMenu = NULL;
}

void AZone::SetZoneLocked(bool bLocked, bool bImmediate) {
}

void AZone::RevealPhaseBridge() {
}



bool AZone::IsLocked() const {
    return false;
}

int32 AZone::GetZoneID() const {
    return 0;
}

bool AZone::GetStaticData(FWorldZoneRow& Row) {
    return false;
}

FText AZone::GetNextPreviousLevelNotCompletedVO() {
    return FText::GetEmpty();
}

FText AZone::GetNextInsufficientOrbsVO() {
    return FText::GetEmpty();
}

void AZone::GetCriteriaPreventingUnlock(TArray<EZoneLockedCriteria>& Criteria) const {
}



