#include "BogieBoiAnimInstance.h"

UBogieBoiAnimInstance::UBogieBoiAnimInstance() {
    this->StompReactionMontage = NULL;
    this->AdditiveHitBlend = 0.00f;
    this->TurnAmount = 0.00f;
    this->TurnRight = false;
    this->EnterHiding = false;
    this->ExitHiding = false;
    this->EnterAlert = false;
    this->ExitAlert = false;
    this->EnterPeeping = false;
    this->ExitPeeping = false;
    this->EnterDizzy = false;
    this->ExitDizzy = false;
}

void UBogieBoiAnimInstance::OnStompReactionMontageEnded(UAnimMontage* pMontage, bool interrupted) {
}


