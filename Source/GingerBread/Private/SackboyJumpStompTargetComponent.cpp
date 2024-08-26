#include "SackboyJumpStompTargetComponent.h"

USackboyJumpStompTargetComponent::USackboyJumpStompTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tag = TEXT("JumpStompTarget");
    this->SeparateUpAndSurfaceActivationRange = true;
    this->JumpStompTargetType = EJumpStompTargetType::Standard;
}


