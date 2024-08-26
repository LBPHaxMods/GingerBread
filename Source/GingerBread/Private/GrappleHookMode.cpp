#include "GrappleHookMode.h"
#include "EControlMode.h"

UGrappleHookMode::UGrappleHookMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ModeType = EControlMode::GrappleHook;
    this->GrappleHookClass = NULL;
    this->GrappleHookActor = NULL;
}

ASackboy* UGrappleHookMode::GetOwningSackboy(AActor* NewGrappleHookActor) {
    return NULL;
}


