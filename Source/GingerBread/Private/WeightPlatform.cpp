#include "WeightPlatform.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AWeightPlatform::AWeightPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->PlatformStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformStaticMesh"));
    this->OnTopDetection = CreateDefaultSubobject<UBoxComponent>(TEXT("OnTopDetection"));
    this->OnTopInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("OnTopInteraction"));
    this->PlatformAudio = CreateDefaultSubobject<UAkComponent>(TEXT("PlatformAudio"));
    this->CrushDetection = CreateDefaultSubobject<UBoxComponent>(TEXT("CrushDetection"));
    this->CrushInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("CrushInteraction"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->DirectionTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("DirectionTimeline"));
    this->MovementTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("MovementTimeline"));
    this->SplineFollower = NULL;
    this->ForwardSpline = NULL;
    this->BackwardsSpline = NULL;
    this->AccelerationTimeline = NULL;
    this->AkFallStart = NULL;
    this->AkFallStop = NULL;
    this->AkRiseStart = NULL;
    this->AkRiseStop = NULL;
    this->AkFallStartHaptic = NULL;
    this->AkFallStopHaptic = NULL;
    this->AkRiseStartHaptic = NULL;
    this->AkRiseStopHaptic = NULL;
    this->DropSpeed = 5.00f;
    this->DropDistance = 30.00f;
    this->RaiseSpeed = 3.00f;
    this->LandingCameraShake = NULL;
    this->AccelerationTimelineAlphaCurve = NULL;
    this->MovementTimelineCurve = NULL;
    this->SplineEndReachedRumble = NULL;
    this->SplineEndReachedHapticEvent = NULL;
    this->MinImpactDistance = 1.00f;
    this->UpAccelPlayRate = 1.00f;
    this->DownAccelPlayRate = 2.00f;
    this->MovingUpSplineCurve = NULL;
    this->MovingDownSplineCurve = NULL;
    this->LerpTargetZSpeed = 0.00f;
    this->MinEndReachedDistance = 0.18f;
    this->impact = false;
    this->PlatformStaticMesh->SetupAttachment(RootComponent);
    this->OnTopDetection->SetupAttachment(PlatformStaticMesh);
    this->OnTopInteraction->SetupAttachment(PlatformStaticMesh);
    this->PlatformAudio->SetupAttachment(PlatformStaticMesh);
    this->CrushDetection->SetupAttachment(PlatformStaticMesh);
    this->CrushInteraction->SetupAttachment(PlatformStaticMesh);
}

void AWeightPlatform::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AWeightPlatform::OnComponentEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AWeightPlatform::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AWeightPlatform::OnComponentBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AWeightPlatform::MovementTimeline_Update(const float Alpha) {
}

void AWeightPlatform::MovementTimeline_Finished() {
}

void AWeightPlatform::DirectionTimeline_Update(const float Alpha) {
}

void AWeightPlatform::CheckForCrushing() {
}

void AWeightPlatform::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWeightPlatform, StartLocation);
    DOREPLIFETIME(AWeightPlatform, impact);
}


