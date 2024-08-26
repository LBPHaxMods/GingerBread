#include "BTTask_CereboomProjectileAttack.h"

UBTTask_CereboomProjectileAttack::UBTTask_CereboomProjectileAttack() {
    this->NodeName = TEXT("Cereboom Attack");
    this->CurrentAttackType = ERangedAttackType::AT_ChainTarget;
    this->bDebug = false;
}

void UBTTask_CereboomProjectileAttack::SetDebugStateChangeText(AActor* OwningActor, const FString& Text) {
}


