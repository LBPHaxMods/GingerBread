#include "AIAnimInstance_Legacy.h"
#include "Net/UnrealNetwork.h"

UAIAnimInstance_Legacy::UAIAnimInstance_Legacy() {
    this->AIState = EAIAnimState::Idle;
}

void UAIAnimInstance_Legacy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAIAnimInstance_Legacy, AIState);
}


