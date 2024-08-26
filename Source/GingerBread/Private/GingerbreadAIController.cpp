#include "GingerbreadAIController.h"
#include "GingerbreadPathFollowingComponent.h"

AGingerbreadAIController::AGingerbreadAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGingerbreadPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->bRotatesPawnWithControlRotation = false;
    this->BTAsset = NULL;
    this->BlackboardAsset = NULL;
}

void AGingerbreadAIController::WakeUp() {
}

void AGingerbreadAIController::PutToSleep() {
}


