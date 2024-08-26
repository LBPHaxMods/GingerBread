#include "FlaglineBase.h"
#include "Components/BoxComponent.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "InteractionComponent.h"
#include "SackboyJumpStompTargetComponent.h"
#include "TriggerActorComponent.h"

AFlaglineBase::AFlaglineBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));

    this->SceneComp = (USceneComponent*)RootComponent;
    this->MainMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMeshCmp"));
    this->DecalMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMeshCmpFlag"));
    this->EndMeshCompA = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndMeshA"));
    this->EndMeshCompB = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndMeshB"));
    this->CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionArea"));
    this->InteractComp = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractArea"));
    this->TimelineComp = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline"));
    this->DecalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal Comp"));
    this->JumpTarget = CreateDefaultSubobject<USackboyJumpStompTargetComponent>(TEXT("Jump Stomp Target"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("Trigger Actor"));
    this->GeneratedMesh = NULL;
    this->GeneratedMeshDecals = NULL;
    this->LineLength = 10.00f;
    this->LineRadius = 0.00f;
    this->DecalEndOffset = 5.00f;
    this->DecalRandomSeed = 0;
    this->DecalPadding = 1.00f;
    this->UseDecal = true;
    this->DecalZOffset = -8.00f;
    this->DecalWidth = 0.30f;
    this->JumpBoost = 0.00f;
    this->BounceCurve = NULL;
    this->TwangFactor = 10.00f;
    this->WobbleTwangFactorScalar = 0.50f;
    this->MainMaterial = NULL;
    this->RopeMesh = NULL;
    this->MainMeshComp->SetupAttachment(RootComponent);
    this->DecalMeshComp->SetupAttachment(RootComponent);
    this->EndMeshCompA->SetupAttachment(RootComponent);
    this->EndMeshCompB->SetupAttachment(RootComponent);
    this->CollisionComp->SetupAttachment(RootComponent);
    this->InteractComp->SetupAttachment(RootComponent);
    this->DecalComp->SetupAttachment(RootComponent);
    this->GameplayTagComponent->SetupAttachment(RootComponent);
}

void AFlaglineBase::SomeoneWobbledFlagline(AActor* wobblerActor) {
}

void AFlaglineBase::SomeoneLeftFlagline(AActor* leftActor) {
}

void AFlaglineBase::SomeoneJoinedFlagline(AActor* joinedActor) {
}

void AFlaglineBase::RopeAnimationFinishedCallback() {
}

void AFlaglineBase::RopeAnimationCallback(float AnimationAlpha) {
}

void AFlaglineBase::OnWake_Implementation() {
}

void AFlaglineBase::OnSleep_Implementation() {
}

void AFlaglineBase::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFlaglineBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



void AFlaglineBase::OnInteractEnd(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AFlaglineBase::OnInteractBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}



