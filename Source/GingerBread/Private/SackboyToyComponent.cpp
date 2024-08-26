#include "SackboyToyComponent.h"
#include "Net/UnrealNetwork.h"

USackboyToyComponent::USackboyToyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tag = TEXT("SackboyToy");
    this->DropTimer = 1.00f;
    this->HoldType = ESackboyToyHoldType::InHand;
    this->AllowGrabOrCarry = true;
    this->AllowThrowOrDrop = true;
    this->CollectionRadius = 8.00f;
    this->StowSocket = TEXT("BackItemSocket");
    this->ThrowSpeed = 96.00f;
    this->ThrowUpSpeed = 48.00f;
    this->ThrowDamageSpeedThreshold = 32.00f;
    this->SpawnItem = NULL;
    this->DownwardStrikeRange = 18.00f;
    this->DownwardStrikeRadius = 2.50f;
}

void USackboyToyComponent::SpawnItemEvent(ASackboy* theSackboy) {
}

void USackboyToyComponent::OnStopAbility(ESackboyToyAbility Ability) {
}

void USackboyToyComponent::OnStartAbility(ESackboyToyAbility Ability) {
}

void USackboyToyComponent::OnRootPrimHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void USackboyToyComponent::OnFinishedDropEvent() {
}

void USackboyToyComponent::OnBeginRootPrimOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void USackboyToyComponent::OnBeginRootPrimInteract(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

ESackboyToyUseAction USackboyToyComponent::GetUseAction_Implementation() {
    return ESackboyToyUseAction::ThrowToy;
}

ASackboy* USackboyToyComponent::GetSackboy() const {
    return NULL;
}

void USackboyToyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USackboyToyComponent, ToyIDRow);
}


