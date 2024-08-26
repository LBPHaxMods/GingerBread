#include "PushMePullYouControlledCrusher.h"
#include "AkComponent.h"

APushMePullYouControlledCrusher::APushMePullYouControlledCrusher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Ak_PushMePullYouControlledCrusher = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_PushMePullYouCrusher"));
    this->StartMovementAudioEvent = NULL;
    this->StopMovementAudioEvent = NULL;
    this->PositionRTPCName = TEXT("him_push_me_box_position");
    this->SpeedRTPCName = TEXT("him_push_me_box_speed");
    this->Ak_PushMePullYouControlledCrusher->SetupAttachment(StaticMeshComponent);
}

void APushMePullYouControlledCrusher::OnPullOutPlatformPositionUpdated(float Position) {
}

void APushMePullYouControlledCrusher::EDITOR_CopyProperties(APullOutPlatform* InPullOutPlatform) {
}


