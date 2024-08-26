#include "ScoreBubbleStack.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "OverlapManagerComponent.h"
#include "SpotShadowComponent.h"
#include "TriggerActorComponent.h"

AScoreBubbleStack::AScoreBubbleStack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));

    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->StackMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StackMesh"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->AkScoreBubbleStack = CreateDefaultSubobject<UAkComponent>(TEXT("AkScoreBubbleStack"));
    this->StackInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("StackInteraction"));
    this->OverlapManager = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManager"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));

    this->AcceptableCollectionDistance = 7.00f;
    this->SackboyImpactVelocityMultiplier = 0.75f;
    this->OtherImpactVelocityMultiplier = 75.00f;
    this->ProjectionVelocityMultiplier = 0.15f;
    this->ImpulseLocationAdjustment = 50.00f;
    this->NumBubblesPerFrame = 10;
    this->ScoreBubbleStackCollapse = NULL;
    this->PhysicsScoreBubbleClass = NULL;
    this->ConeHeight = 6.00f;
    this->ConeTopRadius = 1.80f;
    this->ConeBottomRadius = 4.00f;
    this->StackMesh->SetupAttachment(RootComponent);
    this->SpotShadow->SetupAttachment(StackMesh);
    this->GameplayTag->SetupAttachment(StackMesh);
    this->CraftCutterTarget->SetupAttachment(StackMesh);
    this->HitPoints->SetupAttachment(RootComponent);
    this->AkScoreBubbleStack->SetupAttachment(RootComponent);
    this->StackInteraction->SetupAttachment(RootComponent);
}

void AScoreBubbleStack::OnStackMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AScoreBubbleStack::OnHitPointsPostModificationAttempt(const FHitPointModifyResult& Result) {
}

void AScoreBubbleStack::OnCoolSystemAvailable(AActor* ManagerActor) {
}

void AScoreBubbleStack::OnCollapse_Implementation() {
}

void AScoreBubbleStack::OnBeginOverlapFirstSackboy(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, ASackboy* OtherSackboy, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AScoreBubbleStack::OnBeginOverlapAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AScoreBubbleStack::OnBeginInteractionFirstSackboy(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, ASackboy* OtherSackboy, UInteractionComponent* OtherComp) {
}

void AScoreBubbleStack::OnBeginInteractionAnyActor(UOverlapManagerComponent* OverlapManagerComponent, UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}


