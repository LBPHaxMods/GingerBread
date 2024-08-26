#include "WAMMole.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/ChildActorComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/TimelineComponent.h"
#include "BlastersTargetComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "SackboySlapTargetComponent.h"
#include "ThrowTargetComponent.h"

AWAMMole::AWAMMole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->playerVisRadius = CreateDefaultSubobject<USphereComponent>(TEXT("playerVisRadius"));
    this->playerVisInteractRadius = CreateDefaultSubobject<UInteractionComponent>(TEXT("playerVisInteractRadius"));
    this->MoleSM = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MoleSM"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->BlastersTarget = CreateDefaultSubobject<UBlastersTargetComponent>(TEXT("BlastersTarget"));
    this->SackboySlapTarget = CreateDefaultSubobject<USackboySlapTargetComponent>(TEXT("SackboySlapTarget"));
    this->CollisionCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
    this->CollisionInteractCapsule = CreateDefaultSubobject<UInteractionComponent>(TEXT("CollisionInteractCapsule"));
    this->AkMoleBurrowAudio = CreateDefaultSubobject<UAkComponent>(TEXT("AkMoleBurrowAudio"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->HitFlashComponentBase = NULL;
    this->MudParticles = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MudParticles"));
    this->OrbPrizeCA = CreateDefaultSubobject<UChildActorComponent>(TEXT("OrbPrizeCA"));
    this->DebugText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("DebugText"));
    this->FasterBurrow_Speed = CreateDefaultSubobject<UTimelineComponent>(TEXT("FasterBurrow_Speed"));
    this->PickupContainer = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->MoleHitAudio = NULL;
    this->MoleSurfaceAppearAudio = NULL;
    this->DirtAppearAudio = NULL;
    this->MoleHitAudio_Normal = NULL;
    this->IdleAudio1 = NULL;
    this->IdleAudio2 = NULL;
    this->IdleAudio3 = NULL;
    this->MamaTauntAudio = NULL;
    this->MoleBurrowDig = NULL;
    this->MoleVoxBurrow = NULL;
    this->MoleBurrowDigStop = NULL;
    this->MoleBurrowFrantic = NULL;
    this->MoleBurrowFranticStop = NULL;
    this->MudParticlesRate = 3.00f;
    this->UnderGroundAnimTime = 0.80f;
    this->FasterBurrow_Speed_AlphaCurve = NULL;
    this->EmergeVFX = NULL;
    this->MoleHitImpactVFX = NULL;
    this->MoleHitVibration = NULL;
    this->MoleHitFlashMaterial = NULL;
    this->State = EWAMMoleState::Disabled;
    this->PrevState = EWAMMoleState::Disabled;
    this->playerVisRadius->SetupAttachment(RootComponent);
    this->playerVisInteractRadius->SetupAttachment(RootComponent);
    this->MoleSM->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(MoleSM);
    this->CraftCutterTarget->SetupAttachment(MoleSM);
    this->BlastersTarget->SetupAttachment(MoleSM);
    this->SackboySlapTarget->SetupAttachment(MoleSM);
    this->CollisionCapsule->SetupAttachment(MoleSM);
    this->CollisionInteractCapsule->SetupAttachment(MoleSM);
    this->AkMoleBurrowAudio->SetupAttachment(RootComponent);
    this->PickupContainer->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(MoleSM);
}

void AWAMMole::TurnOffTargetsOnWAM() {
}

void AWAMMole::PlayMamaTauntAudio() {
}

void AWAMMole::PlayIdleAudio3() {
}

void AWAMMole::PlayIdleAudio2() {
}

void AWAMMole::PlayIdleAudio1() {
}

void AWAMMole::OnRep_State() {
}

void AWAMMole::OnPlayerVisRadiusEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AWAMMole::OnPlayerVisRadiusEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AWAMMole::OnPlayerVisRadiusBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWAMMole::OnPlayerVisRadiusBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AWAMMole::LookAtLocation_Implementation(const FVector& Location) {
}

void AWAMMole::FasterBurrow_Speed_Update(const float Alpha) {
}

void AWAMMole::FacePositionAndRunSurprise_Implementation(const FVector& Position, const float OffsetTime) {
}

void AWAMMole::FaceActorWithRunSurprise_Implementation(AActor* Actor, const float OffsetTime) {
}

void AWAMMole::EmergeWithMudVFX_Implementation() {
}

void AWAMMole::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWAMMole, State);
    DOREPLIFETIME(AWAMMole, PrevState);
}


