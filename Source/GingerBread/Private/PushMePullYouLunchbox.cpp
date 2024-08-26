#include "PushMePullYouLunchbox.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SplineComponent.h"
#include "Net/UnrealNetwork.h"
#include "SplineFollowerComponent.h"

APushMePullYouLunchbox::APushMePullYouLunchbox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->CollisionBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBoxComponent"));
    this->Ak_PushMePullYouLunchbox = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_PushMePullYouCrusher"));
    this->SplineAfterFallingComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineAfterFallingComponent"));
    this->SplineFollowerComponent = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollowerComponent"));
    this->FallStartAudio = NULL;
    this->FallEndAudio = NULL;
    this->MinEndReachedDistance = 0.50f;
    this->FallingAudioEvent = NULL;
    this->HasFallen = false;
    this->MinimumPullOutPlatformPositionAfterFalling = 1.00f;
    this->CollisionBoxComponent->SetupAttachment(StaticMeshComponent);
    this->Ak_PushMePullYouLunchbox->SetupAttachment(StaticMeshComponent);
    this->SplineAfterFallingComponent->SetupAttachment(RootComponent);
}

void APushMePullYouLunchbox::OnSplineUpdatePosition(float InCurrentPosition, float InDeltaTime) {
}

void APushMePullYouLunchbox::OnSecondPullOutPlatformPositionUpdated(float Position) {
}

void APushMePullYouLunchbox::OnRep_MinimumPullOutPlatformPositionAfterFalling() {
}

void APushMePullYouLunchbox::OnRep_HasFallen() {
}

void APushMePullYouLunchbox::OnFirstPullOutPlatformPositionUpdated(float Position) {
}

void APushMePullYouLunchbox::EDITOR_CopyProperties(APullOutPlatform* InFirstPullOutPlatform, APullOutPlatform* InSecondPullOutPlatform) {
}

void APushMePullYouLunchbox::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APushMePullYouLunchbox, HasFallen);
    DOREPLIFETIME(APushMePullYouLunchbox, MinimumPullOutPlatformPositionAfterFalling);
}


