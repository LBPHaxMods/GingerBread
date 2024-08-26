#include "TreasurePod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Components/CapsuleComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "ArcComponent.h"
#include "CSPHelperComponent.h"
#include "CraftCutterTargetComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "PickupContainerComponent.h"
#include "RollDazeOverride.h"
#include "ThrowTargetComponent.h"
#include "TriggerActorComponent.h"

ATreasurePod::ATreasurePod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));

    this->BaseMesh = (UStaticMeshComponent*)RootComponent;
    this->EggMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EggMesh"));
    this->EggCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("EggCollision"));
    this->EggInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("EggInteraction"));
    this->ArcComponent = CreateDefaultSubobject<UArcComponent>(TEXT("EggCArcComponentollision"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->EggMeshGameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("BrokenEggGameplayTagComponent"));
    this->PickupContainerComponent = CreateDefaultSubobject<UPickupContainerComponent>(TEXT("PickupContainerComponent"));
    this->RollDazeOverride = CreateDefaultSubobject<URollDazeOverride>(TEXT("RollDazeOverride"));
    this->PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLightComponent"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->RotateTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("RotateTimeline"));
    this->EggReactionTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("EggReactionTimeline"));
    this->ExpandWinningFaceTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ExpandWinningFaceTimeline"));
    this->PrizeWonTimeline = NULL;
    this->ExplosionTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ExplosionTimeline"));
    this->ThrowTarget = CreateDefaultSubobject<UThrowTargetComponent>(TEXT("ThrowTarget"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->RotateDuration = 1.00f;
    this->PrizeSwitchPercent = 0.50f;
    this->UserWorldMaterialType = ETreasurePodMaterialType::UseWorldLocation;
    this->RotateDurationMultiplier = 1.00f;
    this->SpawnVerticalOffset = 15.00f;
    this->SpawnLandingOffset = 18.00f;
    this->SpawnApexHeight = 18.00f;
    this->ExplosionClass = NULL;
    this->RotateAudioEvent = NULL;
    this->SlappedAudioEvent = NULL;
    this->BeepAudioEvent = NULL;
    this->ExplosionAudioEvent = NULL;
    this->PodOpenedNegativeAudioEvent = NULL;
    this->PodOpenedAudioEvent = NULL;
    this->BeepHapticEvent = NULL;
    this->PodOpenedNegativeHapticEvent = NULL;
    this->PodOpenedHapticEvent = NULL;
    this->PodOpenedGamepadAudioEvent = NULL;
    this->PodOpenedNegativeGamepadAudioEvent = NULL;
    this->PrizeVFX = NULL;
    this->NegativePrizeVFX = NULL;
    this->ExplosionVFX = NULL;
    this->PositiveForceFeedbackIntensity = 0.50f;
    this->PositiveForceFeedbackDuration = 0.50f;
    this->MediocreForceFeedbackIntensity = 1.00f;
    this->MediocreForceFeedbackDuration = 0.50f;
    this->NegativeForceFeedbackIntensity = 1.00f;
    this->NegativeForceFeedbackDuration = 1.00f;
    this->RotateTimelineCurve = NULL;
    this->EggReactionTimelineCurve = NULL;
    this->EggReactionTimelinePlayRate = 2.00f;
    this->ExpandingWinningFaceTimelinePlayRate = 1.50f;
    this->ExplosionTimelinePlayRate = 8.00f;
    this->ExpandWinningFaceTimelineCurve = NULL;
    this->ExplosionTimelineCurve = NULL;
    this->ExplosionCountdownEvents.AddDefaulted(9);
    this->ExplosionDelayFromBeep = 0.20f;
    this->ExplosionCountdownTimeMultiplier = 3.30f;
    this->ExplosionEggMeshMaxScale = 1.25f;
    this->ExplosionBlastRadius = 0.00f;
    this->WorldLocation = EWorldLocation::Amazon;
    this->BrokenEggMesh = NULL;
    this->ExplosionForceFeedback = NULL;
    this->ExplosionForceFeedbackAttenuation = NULL;
    this->ExplosionCameraShake = NULL;
    this->ExplosionCameraShakeInnerRadius = 0.00f;
    this->ExplosionCameraShakeOuterRadius = 0.00f;
    this->ExplosionCameraShakeFalloff = 0.00f;
    this->EggDynamicMaterialInstance = NULL;
    this->EggInteraction->SetupAttachment(RootComponent);
    this->ArcComponent->SetupAttachment(RootComponent);
    this->GameplayTagComponent->SetupAttachment(RootComponent);
    this->EggMeshGameplayTagComponent->SetupAttachment(EggMesh);
    this->PickupContainerComponent->SetupAttachment(RootComponent);
    this->RollDazeOverride->SetupAttachment(RootComponent);
    this->PointLightComponent->SetupAttachment(RootComponent);
    this->ThrowTarget->SetupAttachment(RootComponent);
    this->CraftCutterTarget->SetupAttachment(RootComponent);
    this->EggMesh->SetupAttachment(RootComponent);
    this->EggCollision->SetupAttachment(RootComponent);
}

void ATreasurePod::StopForceFeedback() {
}

void ATreasurePod::Server_DelayedSetDestroyedState() {
}

void ATreasurePod::RotateTL_Update(const float Alpha) {
}

void ATreasurePod::RotateTL_Finished() {
}

void ATreasurePod::OnRep_State() {
}

void ATreasurePod::OnPickupContainterPickupSpawned(UPickupContainerComponent* PickupContainer, AActor* SpawnedPickup, int32 SpawnedPickupIndex) {
}

void ATreasurePod::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

void ATreasurePod::OnCSPAction(uint32 Type) {
}

void ATreasurePod::ExplosionTL_Update(const float Alpha) {
}

void ATreasurePod::ExplosionTL_Finished() {
}

void ATreasurePod::ExpandWinningFaceTL_Update(const float Scale) {
}

void ATreasurePod::ExpandWinningFaceTL_Finished() {
}

void ATreasurePod::EggReactTL_Update(const float Alpha) {
}

void ATreasurePod::EDITOR_SetupFromBlutility(const float InRotateDuration, const TArray<FTreasurePodContentSetup> InContents) {
}

void ATreasurePod::DelayedHandlCountdownEvent(int32 AkId) {
}

void ATreasurePod::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATreasurePod, Server_State);
}


