#include "VexTrainChase.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/TimelineComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "SplineFollowerComponent.h"
#include "TriggerActorComponent.h"

AVexTrainChase::AVexTrainChase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->MovementRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MovementRoot"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->DestroyBox = CreateDefaultSubobject<UBoxComponent>(TEXT("DestroyBox"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->SplineFollower = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollower"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->HitPointsModifierDV = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifierDV"));
    this->WobbleTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("WobbleTimeline"));
    this->SpotLightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->BoundingInteractBox = CreateDefaultSubobject<UInteractionComponent>(TEXT("BoundingInteractBox"));
    this->DestroyVolumeInteractBox = CreateDefaultSubobject<UInteractionComponent>(TEXT("DestroyVolumeInteractBox"));
    this->Ak_TrainChase = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_TrainChase"));
    this->WobbleCurve = NULL;
    this->TimeToTraverse = 50.00f;
    this->WobbleTimelinePlayRate = 0.30f;
    this->WobbleMultiplier = 1.00f;
    this->SpotlightFadeDistance = 800.00f;
    this->SpotlightMaxDrawDistance = 400.00f;
    this->ResetSplineTime = 4.00f;
    this->TrainStartAudio = NULL;
    this->TrainStopAudio = NULL;
    this->WobbleAudio = NULL;
    this->MovementRoot->SetupAttachment(RootComponent);
    this->SkeletalMesh->SetupAttachment(MovementRoot);
    this->CollisionBox->SetupAttachment(SkeletalMesh);
    this->DestroyBox->SetupAttachment(MovementRoot);
    this->SplineComponent->SetupAttachment(RootComponent);
    this->SpotLightComponent->SetupAttachment(SkeletalMesh);
    this->BoundingInteractBox->SetupAttachment(SkeletalMesh);
    this->DestroyVolumeInteractBox->SetupAttachment(MovementRoot);
    this->Ak_TrainChase->SetupAttachment(MovementRoot);
}

void AVexTrainChase::WobbleTLUpdate(float InAlpha) {
}

void AVexTrainChase::WobbleTLTPlayAudio() {
}

void AVexTrainChase::StopVexTrainFollowing() {
}

void AVexTrainChase::StartVexTrainFollowing() {
}

void AVexTrainChase::StartTrainSplineFollow(USplineFollowerComponent* InSplineFollower, bool InWillTravelForward) {
}

void AVexTrainChase::SplineFollowDone(USplineFollowerComponent* InSplineFollower, bool InWasTravellingForward) {
}

void AVexTrainChase::ResetVexTrain() {
}


