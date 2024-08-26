#include "TrapezeChimeBarAudioComponent.h"

UTrapezeChimeBarAudioComponent::UTrapezeChimeBarAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnChimeBarHitAkEvent = NULL;
    this->RTPC = TEXT("physx_velocitys");
    this->InRangeA = 0.00f;
    this->InRangeB = 10000.00f;
    this->OutRangeA = 0.00f;
    this->OutRangeB = 100.00f;
}

void UTrapezeChimeBarAudioComponent::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


