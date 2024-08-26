#include "SpikeyVineSingle.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "VertexAnimatedMeshComponent.h"

ASpikeyVineSingle::ASpikeyVineSingle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));

    this->VineBase = CreateDefaultSubobject<USceneComponent>(TEXT("VineBase"));
    this->SBInteraction = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SBInteraction"));
    this->SBInteractComp = CreateDefaultSubobject<UInteractionComponent>(TEXT("SBInteractComp"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTags"));
    this->CutterInteraction = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CutterInteraction"));
    this->CutterInteractComp = CreateDefaultSubobject<UInteractionComponent>(TEXT("CutterInteractComp"));
    this->CutterTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("CutterTag"));
    this->DetectionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("DetectionBox"));
    this->DetectionInteractComp = CreateDefaultSubobject<UInteractionComponent>(TEXT("DetectionInteractComp"));
    this->VineVertexAnimMesh = CreateDefaultSubobject<UVertexAnimatedMeshComponent>(TEXT("VineVertexAnimMesh"));
    this->SpikeyVineCutDown_PS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SpikeyVineCutDown_PS"));
    this->AkComponent = NULL;
    this->BaseMesh = (UStaticMeshComponent*)RootComponent;
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->Timeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline"));
    this->IsControlledByGroup = false;
    this->RegrowDelay = 3.00f;
    this->SignpostDangerTime = 3.00f;
    this->IsShortVine = false;
    this->CurrentMasterState = ESpikeyVineMasterState::Grow;
    this->HueShiftAmount = 0.20f;
    this->TimelineScalingCurve = NULL;
    this->CollisionScaleUpSpeed = 2.00f;
    this->CollisionScaleDownSpeed = 10.00f;
    this->TallVineStaticMesh = NULL;
    this->TallVineVertexAnimSequence = NULL;
    this->TallVineSBCapsuleHalfHeight = 12.00f;
    this->ShortVineStaticMesh = NULL;
    this->ShortVineVertexAnimSequence = NULL;
    this->ShortVineSBCapsuleHalfHeight = 6.00f;
    this->VineSingleCutAudio = NULL;
    this->VineSingleRegrowAudio = NULL;
    this->VineSingleSignpostingAudio = NULL;
    this->VineGrowForceFeedback = NULL;
    this->VineSinglePreGrowHaptics = NULL;
    this->VineGroupPreGrowHaptics = NULL;
    this->VineSingleGrowHaptics = NULL;
    this->VineGroupGrowHaptics = NULL;
    this->VineBase->SetupAttachment(RootComponent);
    this->SBInteraction->SetupAttachment(VineBase);
    this->SBInteractComp->SetupAttachment(SBInteraction);
    this->GameplayTagComponent->SetupAttachment(RootComponent);
    this->CutterInteraction->SetupAttachment(RootComponent);
    this->CutterInteractComp->SetupAttachment(CutterInteraction);
    this->CutterTag->SetupAttachment(CutterInteraction);
    this->DetectionBox->SetupAttachment(RootComponent);
    this->DetectionInteractComp->SetupAttachment(RootComponent);
    this->VineVertexAnimMesh->SetupAttachment(RootComponent);
    this->SpikeyVineCutDown_PS->SetupAttachment(VineVertexAnimMesh);
}

void ASpikeyVineSingle::TimelineScalingHandle(float Scale) {
}

void ASpikeyVineSingle::StateChange(ESpikeyVineInternalState NewState) {
}

void ASpikeyVineSingle::OnTimelineFinished() {
}

void ASpikeyVineSingle::OnRep_State() {
}

void ASpikeyVineSingle::OnDetectionBoxEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void ASpikeyVineSingle::OnDetectionBoxEndInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void ASpikeyVineSingle::OnDetectionBoxBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASpikeyVineSingle::OnDetectionBoxBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

ESpikeyVineInternalState ASpikeyVineSingle::GetState() const {
    return ESpikeyVineInternalState::Grown;
}

void ASpikeyVineSingle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpikeyVineSingle, CurrentMasterState);
}


