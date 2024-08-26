#include "SpaceHopper.h"
#include "AkComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SpotShadowComponent.h"
#include "TriggerActorComponent.h"

ASpaceHopper::ASpaceHopper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base"));

    this->Base = (UStaticMeshComponent*)RootComponent;
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->BodyCollision = CreateDefaultSubobject<USphereComponent>(TEXT("BodyCollision"));
    this->BodyInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("BodyInteract"));
    this->BaseCollision = NULL;
    this->BodyDamager = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyDamager"));
    this->BaseDamager = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseDamager"));
    this->BodyInteractDamager = CreateDefaultSubobject<UInteractionComponent>(TEXT("BodyInteractDamager"));
    this->BaseInteractDamager = CreateDefaultSubobject<UInteractionComponent>(TEXT("BaseInteractDamager"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->HitPointsModifierBody = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifierBody"));
    this->HitPointsModifierBase = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifierBase"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->HeightTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("HeightTimeline"));
    this->CanPlayAudio = false;
    this->LandingLocations.AddDefaulted(1);
    this->JumpHeight = 40.00f;
    this->JumpTime = 1.00f;
    this->DelayBetweenJumps = 2.00f;
    this->StartDelay = 0.00f;
    this->StartAtPlay = true;
    this->Synchronisation = ESpaceHopperSynchronisation::None;
    this->SpaceHopperDataTable = NULL;
    this->TellTime = 1.00f;
    this->SquashHeight = 30.00f;
    this->HeightTimelineAlphaCurve = NULL;
    this->HeightTimelineElavationAlphaUpCurve = NULL;
    this->HeightTimelineElavationAlphaDownCurve = NULL;
    this->MaxHueShiftAmount = 0.20f;
    this->ImpactAudio = NULL;
    this->BaseInteractDamager->SetupAttachment(BaseDamager);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->SpotShadow->SetupAttachment(RootComponent);
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->BodyCollision->SetupAttachment(RootComponent);
    this->BodyInteract->SetupAttachment(BodyCollision);
    this->BodyDamager->SetupAttachment(RootComponent);
    this->BaseDamager->SetupAttachment(SkeletalMesh);
    this->BodyInteractDamager->SetupAttachment(BodyDamager);
}

void ASpaceHopper::OnBodyCollisionHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ASpaceHopper::Jump_Implementation() {
}

void ASpaceHopper::HeightTimeline_StartDecending() {
}

void ASpaceHopper::HeightTimeline_PostUpdate() {
}

void ASpaceHopper::HeightTimeline_Finished() {
}

void ASpaceHopper::HeightTimeline_ElavationAlphaUp(const float ElavationAlphaUp) {
}

void ASpaceHopper::HeightTimeline_ElavationAlphaDown(const float ElavationAlphaDown) {
}

void ASpaceHopper::HeightTimeline_Alpha(const float Alpha) {
}

void ASpaceHopper::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpaceHopper, StartLocation);
    DOREPLIFETIME(ASpaceHopper, TargetLocation);
}


