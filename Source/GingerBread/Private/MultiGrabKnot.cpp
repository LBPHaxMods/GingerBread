#include "MultiGrabKnot.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "TriggerActorComponent.h"

AMultiGrabKnot::AMultiGrabKnot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->RewardMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RewardMesh"));
    this->BaseCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseCollision"));
    this->EditorDisplayedKnot = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EditorDisplayedKnot"));
    this->MultiplayerIcon = CreateDefaultSubobject<UTextRenderComponent>(TEXT("MultiplayerIcon"));
    this->BaseSK = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseSK"));
    this->MultiplayerObject = NULL;
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->RevealObject = NULL;
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainer"));
    this->MultiplayerKnots = true;
    this->MaxNumberOfKnots = 4;
    this->RewardsOnString = 4;
    this->InitialStringLength = 6.00f;
    this->StringRewardSpacing = 5.00f;
    this->StringReward = EStringReward::ScoreBubble;
    this->EndReward = EKnotReward::Collectabell_S;
    this->FinalReward = EEndReward::PickupContainer;
    this->HangingDown = false;
    this->RewardEmergeSpeed = 2.00f;
    this->SpawnVFXType = NULL;
    this->SpawnPrizeVFXType = NULL;
    this->SpawnEnemyVFXType = NULL;
    this->ClosedMPAnim = NULL;
    this->ClosedSPAnim = NULL;
    this->BaseTearingAnim = NULL;
    this->OpenAnim = NULL;
    this->GrabKnotObjectPop = NULL;
    this->GrabKnotObjectPopGamepad = NULL;
    this->GrabKnotEndPrize = NULL;
    this->GrabKnotEndPrizeGamepad = NULL;
    this->GrabKnotEndPrizeEnemy = NULL;
    this->GrabKnotEndPrizeEnemyGamepad = NULL;
    this->RevealObjectZDisplacementAlphaCurve = NULL;
    this->StringRewardRumble = NULL;
    this->EndRewardRumble = NULL;
    this->StringRewardRumbleHapticsEvent = NULL;
    this->EndRewardRumbleHapticsEvent = NULL;
    this->EndRewardEnemyRumbleHapticsEvent = NULL;
    this->GrabKnotChildActorBP = NULL;
    this->CollectabellSmallPhysicsBP = NULL;
    this->CollectabellLargePhysicsBP = NULL;
    this->UseMaterialOverrideWorldLocation = false;
    this->MaterialOverrideWorldLocation = EWorldLocation::Amazon;
    this->Grabknots.AddDefaulted(4);
    this->RewardMesh->SetupAttachment(RootComponent);
    this->BaseCollision->SetupAttachment(RootComponent);
    this->EditorDisplayedKnot->SetupAttachment(RootComponent);
    this->MultiplayerIcon->SetupAttachment(RootComponent);
    this->BaseSK->SetupAttachment(RootComponent);
    this->PickupContainer->SetupAttachment(RootComponent);
}

void AMultiGrabKnot::RevealObject_TimelineFunc(float ZDisplacementAlpha) {
}

void AMultiGrabKnot::RevealObject_EventFunc() {
}

void AMultiGrabKnot::OnRep_Grabknots() {
}

void AMultiGrabKnot::OnPickupSpawned(UPickupContainerComponent* container, AActor* SpawnedPickup, int32 Index) {
}

void AMultiGrabKnot::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

void AMultiGrabKnot::OnInitialPlayerCountAvailable(const FString& Level, int32 Count) {
}

void AMultiGrabKnot::DisableBaseSKTick(UAnimationAsset* Animation) {
}

void AMultiGrabKnot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMultiGrabKnot, Grabknots);
}


