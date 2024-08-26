#include "SeesawBase.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/BoxComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ASeesawBase::ASeesawBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));

    this->IsActive = true;
    this->UseManualMode = true;
    this->RotationAmount = 10.00f;
    this->TimelineRestartDelay = 1.00f;
    this->RotationDuration = 1.00f;
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->SeesawMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SeesawMesh"));
    this->OverlapActorBox = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapActorBox"));
    this->AudioRoot = CreateDefaultSubobject<USceneComponent>(TEXT("AudioRoot"));
    this->Ak_SeesawCenter = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_SeesawCenter"));
    this->Ak_SeesawLeft = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_SeesawLeft"));
    this->Ak_SeesawRight = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_SeesawRight"));
    this->Ak_HapticsSeesaw = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_HapticsSeesaw"));
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->SeesawTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->InteractVibration = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interaction_Vibration"));
    this->SeesawAnimCurve = NULL;
    this->SeesawSlideAudioEvent = NULL;
    this->SeesawSlideStopAudioEvent = NULL;
    this->SeesawImpactFirstAudioEvent = NULL;
    this->SeesawImpactSecondAudioEvent = NULL;
    this->SlideAudioEventOnTimeline = 0.30f;
    this->FirstHtAudioEventOnTimeline = 0.80f;
    this->SecondHtAudioEventOnTimeline = 0.90f;
    this->MaxDistanceForAudioRootMovement = 20.00f;
    this->HapticForceFeedback = NULL;
    this->HitFloorAkHapticEvent = NULL;
    this->SeesawSlideHapticEvent = NULL;
    this->SeesawSlideStopHapticEvent = NULL;
    this->SeesawImpactFirstHapticEvent = NULL;
    this->SeesawImpactSecondHapticEvent = NULL;
    this->TargetRotation = 0.00f;
    this->StartingRotationRoll = 0.00f;
    this->InteractVibration->SetupAttachment(SeesawMesh);
    this->Arrow->SetupAttachment(RootComponent);
    this->SeesawMesh->SetupAttachment(RootComponent);
    this->OverlapActorBox->SetupAttachment(SeesawMesh);
    this->AudioRoot->SetupAttachment(SeesawMesh);
    this->Ak_SeesawCenter->SetupAttachment(AudioRoot);
    this->Ak_SeesawLeft->SetupAttachment(AudioRoot);
    this->Ak_SeesawRight->SetupAttachment(AudioRoot);
    this->Ak_HapticsSeesaw->SetupAttachment(SeesawMesh);
    this->Billboard->SetupAttachment(RootComponent);
}

void ASeesawBase::Trigger_Implementation() {
}

void ASeesawBase::StartSeesawMotion(bool UseDelay) {
}

void ASeesawBase::SlideSoundTimelineEvent() {
}

void ASeesawBase::SeesawTimelineUpdate(const float Value) {
}

void ASeesawBase::SecondHitTimelineEvent() {
}

void ASeesawBase::OnSeesawTimelineFinished() {
}

void ASeesawBase::OnSeesawEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASeesawBase::OnSeesawBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void ASeesawBase::OnInteractionEndOverlap(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ASeesawBase::OnInteractionBeginOverlap(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

bool ASeesawBase::IsSeesawAtEnd() const {
    return false;
}

void ASeesawBase::FirstHitTimelineEvent() {
}

void ASeesawBase::Deactivate_Implementation() {
}

void ASeesawBase::ChangeDirectionAndStartMotion() {
}

void ASeesawBase::Activate_Implementation(bool AutoTrigger) {
}

void ASeesawBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASeesawBase, TargetRotation);
}


