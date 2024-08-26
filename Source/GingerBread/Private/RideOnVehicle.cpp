#include "RideOnVehicle.h"
#include "Components/BoxComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "CSPRideonHelperComponent.h"
#include "DarkMatterEngine.h"
#include "GlobalEventTransceiver.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "OverlapManagerComponent.h"
#include "RideOnPathFollowerComponent.h"

ARideOnVehicle::ARideOnVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->MaxSpeed = 220.00f;
    this->CamMinDistance = 100.00f;
    this->CamMaxDistance = 160.00f;
    this->CamFocusOffsetRight = 0.00f;
    this->CamFocusOffsetUp = 0.00f;
    this->UseAdaptiveCam = false;
    this->CanMove = false;
    this->RideOnCSP = CreateDefaultSubobject<UCSPRideonHelperComponent>(TEXT("RideOnCSP"));
    this->RideOnPathFollower = CreateDefaultSubobject<URideOnPathFollowerComponent>(TEXT("RideOnPathFollower"));
    this->MeshAndCollision = CreateDefaultSubobject<USceneComponent>(TEXT("MeshAndCollision"));
    this->SpawnPoint = CreateDefaultSubobject<UChildActorComponent>(TEXT("Checkpoint"));
    this->DarkMatterEngine = CreateDefaultSubobject<UDarkMatterEngine>(TEXT("Engine"));
    this->ChangeSpeedCurve = NULL;
    this->RideOnPathActor = NULL;
    this->StartDistanceAlongSpline = 0.00f;
    this->CameraArea = NULL;
    this->GameplayTag = NULL;
    this->Root = (USceneComponent*)RootComponent;
    this->EnemyCheckCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("EnemyCheckCollision"));
    this->EnemyOverlapComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("EnemyOverlapComponent"));
    this->BombThrowersParent = CreateDefaultSubobject<USceneComponent>(TEXT("BombThrowersParent"));
    this->EnemySpawnersParent = CreateDefaultSubobject<USceneComponent>(TEXT("EnemySpawnersParent"));
    this->GlobalEventTransceiver = CreateDefaultSubobject<UGlobalEventTransceiver>(TEXT("GlobalEventTransceiver"));
    this->FocusAllowTracking = true;
    this->FocusBlendWeight = 0.00f;
    this->Speed = 0.00f;
    this->OverlapManagerComponent = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManagerComponent"));
    this->BoxOverlapComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxOverlapComponent"));
    this->InteractionOverlapComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("RideOnInteractionComponent"));
    this->RideOnVehicleAnimInstance = NULL;
    this->ChangeSpeedTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ChangeSpeedTimeline"));
    this->bUseSplineRotation = true;
    this->ScrewBombDamageDecal = NULL;
    this->DamageDecalFadeInDuration = 0.25f;
    this->DamageDecalFadeOutDuration = 3.00f;
    this->DamageDecalFadeOutDelay = 3.00f;
    this->EnemyCheckCollision->SetupAttachment(RootComponent);
    this->EnemyOverlapComponent->SetupAttachment(RootComponent);
    this->BombThrowersParent->SetupAttachment(RootComponent);
    this->EnemySpawnersParent->SetupAttachment(RootComponent);
    this->BoxOverlapComponent->SetupAttachment(RootComponent);
    this->InteractionOverlapComponent->SetupAttachment(RootComponent);
    this->MeshAndCollision->SetupAttachment(RootComponent);
    this->SpawnPoint->SetupAttachment(MeshAndCollision);
}

void ARideOnVehicle::SwapCameraArea(ACameraArea* NewTargetCameraArea) {
}

void ARideOnVehicle::StopMovement() {
}

void ARideOnVehicle::SetUseSplineRotation(bool UseRotation, FRotator Rotation) {
}

void ARideOnVehicle::OnTimelineCallback(float Value) {
}

void ARideOnVehicle::OnRep_Speed() {
}

void ARideOnVehicle::OnRep_Server_InitialSettings() {
}

void ARideOnVehicle::OnEndOverlapSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void ARideOnVehicle::OnEndInteractionSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}


void ARideOnVehicle::OnBeginOverlapSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ARideOnVehicle::OnBeginInteractionSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void ARideOnVehicle::OnActorDestroyed(AActor* Actor) {
}

void ARideOnVehicle::MoveToDistance(float Delta, bool generateEvents) {
}

void ARideOnVehicle::KillAllEnemies(float Delay, FVector LaunchImpulse) {
}

void ARideOnVehicle::EndReached() {
}

void ARideOnVehicle::ChangeSpeed(float targetSpeed, float changeDuration) {
}

bool ARideOnVehicle::CalculateHeavyLandingNormalisedLocation(const UPrimitiveComponent* BoundsComponent, const FVector& WorldLocation, FVector& OutNormalisedLocation) const {
    return false;
}

void ARideOnVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARideOnVehicle, Server_InitialSettings);
    DOREPLIFETIME(ARideOnVehicle, Speed);
}


