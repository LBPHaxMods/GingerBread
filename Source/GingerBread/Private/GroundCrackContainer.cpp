#include "GroundCrackContainer.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "SackboyJumpStompTargetComponent.h"

AGroundCrackContainer::AGroundCrackContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));

    this->DefaultRootComponent = (USceneComponent*)RootComponent;
    this->SackboyJumpStompTarget = CreateDefaultSubobject<USackboyJumpStompTargetComponent>(TEXT("JumpStompTargetComponent"));
    this->Collision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Collision"));
    this->TagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("TagComponent"));
    this->PickupComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupComponent"));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
    this->EnterCrackFeedbackAsset = NULL;
    this->EjectedCrackFeedbackAsset = NULL;
    this->SackEnteredCrackPS = NULL;
    this->SackboyReleasedPS = NULL;
    this->SackboyStrugglePS = NULL;
    this->SackboyEnteredCrackAudioEvent = NULL;
    this->SackboyStartedStrugglingAudioEvent = NULL;
    this->RewardAudioEvent = NULL;
    this->SackboyEnteredCrackHapticEvent = NULL;
    this->SackboyStartedStrugglinHapticsEvent = NULL;
    this->SackboyExittedCrackHapticEvent = NULL;
    this->SackboyEnteredCrackGamepadAudioEvent = NULL;
    this->SackboyExittedCrackGamepadAudioEvent = NULL;
    this->CameraShakeOnEnter = NULL;
    this->CameraShakeOnReleased = NULL;
    this->CameraShakeInnerEpicenter = 1000.00f;
    this->CameraShakeOuterEpicenter = 5000.00f;
    this->ScoreBubblesToSpawn = 5;
    this->bCrackEnabled = true;
    this->DisableAfterRelease = false;
    this->bWiggleOnlyRewards = false;
    this->SackboyJumpStompTarget->SetupAttachment(RootComponent);
    this->Collision->SetupAttachment(RootComponent);
    this->TagComponent->SetupAttachment(RootComponent);
    this->PickupComponent->SetupAttachment(RootComponent);
    this->AudioComponent->SetupAttachment(RootComponent);
}

void AGroundCrackContainer::SetCrackEnabled(bool bEnabled) {
}







void AGroundCrackContainer::OnRep_ReplicatedData() {
}

void AGroundCrackContainer::OnRep_CrackEnabled() {
}


bool AGroundCrackContainer::IsOccupying(const ASackboy* InSackboy) const {
    return false;
}

bool AGroundCrackContainer::IsOccupied() const {
    return false;
}

bool AGroundCrackContainer::GetCrackEnabled() const {
    return false;
}

void AGroundCrackContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGroundCrackContainer, bCrackEnabled);
    DOREPLIFETIME(AGroundCrackContainer, Server_ReplicatedData);
}


