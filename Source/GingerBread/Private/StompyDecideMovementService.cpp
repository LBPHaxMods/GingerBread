#include "StompyDecideMovementService.h"

UStompyDecideMovementService::UStompyDecideMovementService() {
    this->NodeName = TEXT("Decide Movement Service");
    this->bCallTickOnSearchStart = true;
}

void UStompyDecideMovementService::SpinDamageApplied(const FHitPointModifyResult& HitResult) {
}


