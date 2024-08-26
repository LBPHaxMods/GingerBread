#include "3DUI_TimerAdjustmentTime.h"
#include "Components/ChildActorComponent.h"
#include "HudRootSceneComponent.h"

A3DUI_TimerAdjustmentTime::A3DUI_TimerAdjustmentTime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHudRootSceneComponent>(TEXT("HudRootScene"));
    this->NumberTextChildActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("NumberTextChildActor"));
    this->ScaleCurve = NULL;
    this->RotationCurve = NULL;
    this->HudRootScene = (UHudRootSceneComponent*)RootComponent;
    this->NumberTextChildActor->SetupAttachment(RootComponent);
}

void A3DUI_TimerAdjustmentTime::TimelineFinished() {
}

void A3DUI_TimerAdjustmentTime::Scale_TimelineUpdate(float Scale) {
}

void A3DUI_TimerAdjustmentTime::Rotation_TimelineUpdate(FVector Rotation) {
}

void A3DUI_TimerAdjustmentTime::ReclaimActor() {
}

void A3DUI_TimerAdjustmentTime::PlayTimeAdjustmentEvent(float Time, FVector WorldLocation) {
}


