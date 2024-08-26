#include "SackboyActingFunctionLibrary.h"

USackboyActingFunctionLibrary::USackboyActingFunctionLibrary() {
}

void USackboyActingFunctionLibrary::UpdateSackboyActingHandState(ASackboy* playerSackboy, USackboyAnimInstance* SackboyAnimInstance) {
}

void USackboyActingFunctionLibrary::UpdateSackboyActingArmBlend(USackboyAnimInstance* SackboyAnimInstance, float leftBlendTarget, float rightBlendTarget) {
}

void USackboyActingFunctionLibrary::UpdateSackboyActingArmAnim(ASackboy* playerSackboy, USackboyAnimInstance* SackboyAnimInstance, float& leftBlendTarget, float& rightBlendTarget) {
}

void USackboyActingFunctionLibrary::TickAnimInstanceForSackboyActing(ASackboy* playerSackboy, USackboyAnimInstance* SackboyAnimInstance) {
}

bool USackboyActingFunctionLibrary::SetupAnimInstanceForSackboyActing(ASackboy* playerSackboy, USackboyAnimInstance* SackboyAnimInstance) {
    return false;
}

void USackboyActingFunctionLibrary::ResetAnimInstanceFromSackboyActing(USackboyAnimInstance* SackboyAnimInstance) {
}

void USackboyActingFunctionLibrary::ProcessSackboyActingMotionInput(ASackboy* Sackboy, USackboyAnimInstance* SackboyAnimInstance) {
}

void USackboyActingFunctionLibrary::GetNextSackboyActingEmotionState(ASackboy* playerSackboy, bool& isNewEmotionState, ESackboyEmotionalState& NextState) {
}

int32 USackboyActingFunctionLibrary::GetNextEmotionalLevel(USackboyAnimInstance* SackboyAnimInstance, ESackboyEmotionalState Emotion) {
    return 0;
}


