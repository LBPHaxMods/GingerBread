#include "CloudPlatformGrid.h"
#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "RegistrationComponent.h"

ACloudPlatformGrid::ACloudPlatformGrid(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Root"));

    this->Root = (UStaticMeshComponent*)RootComponent;
    this->DetectorComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Detector"));
    this->InteractComp = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interactor"));
    this->Clouds = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Spikes"));
    this->CollisionPlane = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionPlane"));
    this->VisibilityBlocker = CreateDefaultSubobject<UBoxComponent>(TEXT("VisibilityBlocker"));
    this->RegistrationComponent = CreateDefaultSubobject<URegistrationComponent>(TEXT("registration"));
    this->CloudParticles = NULL;
    this->CloudPassThroughEvent = NULL;
    this->CloudPassThroughForceFeedback = NULL;
    this->CloudPassThroughHapticsEvent = NULL;
    this->CloudPassThroughGamepadAudioEvent = NULL;
    this->FloatSpeed = 50.00f;
    this->ExitZVelocity = 50.00f;
    this->MaxAcceleration = 10.00f;
    this->MaxDeceleration = 10.00f;
    this->AccelerationCurve = NULL;
    this->DecelerationCurve = NULL;
    this->MaxRelativeZ = 5.00f;
    this->CloudPuffRelativeZ = 5.00f;
    this->CloudTargetMinInset = 2.50f;
    this->CloudTargetInsetLerpRatio = 0.20f;
    this->Rows = 1;
    this->Columns = 1;
    this->Type = 0;
    this->DetectorComp->SetupAttachment(RootComponent);
    this->InteractComp->SetupAttachment(RootComponent);
    this->Clouds->SetupAttachment(RootComponent);
    this->CollisionPlane->SetupAttachment(RootComponent);
    this->VisibilityBlocker->SetupAttachment(RootComponent);
}

void ACloudPlatformGrid::OnRep_TrackedItems() {
}

void ACloudPlatformGrid::OnDetectorComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACloudPlatformGrid::OnDetectorComponentEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ACloudPlatformGrid::OnDetectorComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACloudPlatformGrid::OnDetectorComponentBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ACloudPlatformGrid::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACloudPlatformGrid, TrackedItems);
}


