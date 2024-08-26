#include "NaomiSecretFile.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

ANaomiSecretFile::ANaomiSecretFile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->MoveScene = CreateDefaultSubobject<USceneComponent>(TEXT("MoveScene"));
    this->FileScene = CreateDefaultSubobject<USceneComponent>(TEXT("FileScene"));
    this->FileSM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FileSM"));
    this->FilePanelSM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FilePanelSM"));
    this->CollisionPlaneSM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollisionPlaneSM"));
    this->SecretFileAK = CreateDefaultSubobject<UAkComponent>(TEXT("SecretFileAK"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->TouchScreen = NULL;
    this->SpringOutDelay = 0.00f;
    this->UseTwistedHit = false;
    this->CanHitReact = true;
    this->CorruptionDestroyedVFX = NULL;
    this->SpringOutDuration = 1.00f;
    this->SpringOutVerticalCurve = NULL;
    this->SpringOutHorizontalCurve = NULL;
    this->SpringOutSFX = NULL;
    this->SpringOutForceFeedback = NULL;
    this->SliderMovementInterpSpeed = 1.00f;
    this->SliderMovementLoopSFX = NULL;
    this->SliderStopMovementSFX = NULL;
    this->SliderStopForceFeedback = NULL;
    this->CorruptionMovingDuration = 2.00f;
    this->CorruptionMovingCurve = NULL;
    this->CorruptionBetweenMovesDuration = 1.00f;
    this->CorruptionStartMovingSFXDelay = 0.10f;
    this->CorruptionStartMovingSFX = NULL;
    this->CorruptionStopMovingSFXDelay = 1.65f;
    this->CorruptionStopMovingSFX = NULL;
    this->DamagedHRDuration = 0.15f;
    this->DamagedHRPitchMultiplier = 20.00f;
    this->DamagedHRRollAngleRangeMin = 12.00f;
    this->DamagedHRRollAngleRangeMax = 22.00f;
    this->DestroyedHRDuration = 1.50f;
    this->DestroyedHRFinalRollRotation = 720.00f;
    this->DestroyedHRFinalPitchRotation = 180.00f;
    this->DestroyedHRLowerSFXDelay = 0.75f;
    this->DestroyedHRLowerSFX = NULL;
    this->DestroyedHRHitSFX = NULL;
    this->DestroyedHRHitHaptics = NULL;
    this->RetractDuration = 2.50f;
    this->RetractCurve = NULL;
    this->RetractSFX = NULL;
    this->RetractStopSFX = NULL;
    this->RetractSFXDelay = 1.88f;
    this->Rep_CurrentState = ENaomiSecretFileState::Invalid;
    this->CurrentWave = 0;
    this->FinalHitReactionRoll = 0.00f;
    this->MoveScene->SetupAttachment(RootComponent);
    this->FileScene->SetupAttachment(MoveScene);
    this->FileSM->SetupAttachment(FileScene);
    this->FilePanelSM->SetupAttachment(FileSM);
    this->CollisionPlaneSM->SetupAttachment(FileSM);
    this->SecretFileAK->SetupAttachment(MoveScene);
}


void ANaomiSecretFile::OnTouchScreenSliderUpdated(float Alpha) {
}

void ANaomiSecretFile::OnRep_ServerCachedLocations() {
}

void ANaomiSecretFile::OnRep_CurrentState() {
}

void ANaomiSecretFile::OnCorruptionDestroyed(ANaomiSplineCorruption* DestroyedCorruption) {
}

void ANaomiSecretFile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ANaomiSecretFile, Rep_CurrentState);
    DOREPLIFETIME(ANaomiSecretFile, CurrentWave);
    DOREPLIFETIME(ANaomiSecretFile, FinalHitReactionRoll);
    DOREPLIFETIME(ANaomiSecretFile, ServerCachedLocations);
    DOREPLIFETIME(ANaomiSecretFile, ServerCorruptionMovementData);
}


