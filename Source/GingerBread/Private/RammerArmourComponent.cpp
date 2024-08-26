#include "RammerArmourComponent.h"

URammerArmourComponent::URammerArmourComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArmourDissolveCurve = NULL;
    this->ArmourDissolveDuration = 0.65f;
    this->ArmourChangeDuration = 0.50f;
}

void URammerArmourComponent::InitialiseArmourComponent(USkeletalMeshComponent* ArmourMesh, UCapsuleComponent* PhaseCapsule, UInteractionComponent* InteractionPhaseCapsule) {
}

bool URammerArmourComponent::GetIsEnabled() const {
    return false;
}


