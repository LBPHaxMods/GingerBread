#include "NPCGerald.h"

ANPCGerald::ANPCGerald(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GeraldLocation = EGeraldLocation::HaveYouHeard;
}

void ANPCGerald::OnBeginOverlapAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


