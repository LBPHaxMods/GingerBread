#include "CloudPlatform.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "RegistrationComponent.h"

ACloudPlatform::ACloudPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));

    this->MainMesh = (UStaticMeshComponent*)RootComponent;
    this->DetectorComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Detector"));
    this->InteractComp = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interactor"));
    this->CollisionPlane = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionPlane"));
    this->VisibilityBlocker = CreateDefaultSubobject<UBoxComponent>(TEXT("VisibilityBlocker"));
    this->RegistrationComponent = CreateDefaultSubobject<URegistrationComponent>(TEXT("registration"));
    this->CloudParticles = NULL;
    this->CloudPassThroughEvent = NULL;
    this->CloudPassThroughForceFeedback = NULL;
    this->CloudPassThroughHapticsEvent = NULL;
    this->FloatSpeed = 50.00f;
    this->ExitZVelocity = 50.00f;
    this->MaxAcceleration = 10.00f;
    this->MaxDeceleration = 10.00f;
    this->AccelerationCurve = NULL;
    this->DecelerationCurve = NULL;
    this->MaxRelativeZ = 5.00f;
    this->CloudPuffRelativeZ = 5.00f;
    this->NoCollisionGapFront = false;
    this->NoCollisionGapBack = false;
    this->NoCollisionGapLeft = false;
    this->NoCollisionGapRight = false;
    this->DetectorComp->SetupAttachment(RootComponent);
    this->InteractComp->SetupAttachment(RootComponent);
    this->CollisionPlane->SetupAttachment(RootComponent);
    this->VisibilityBlocker->SetupAttachment(RootComponent);
}

void ACloudPlatform::OnRep_TrackedItems() {
}

void ACloudPlatform::OnDetectorComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACloudPlatform::OnDetectorComponentEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ACloudPlatform::OnDetectorComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ACloudPlatform::OnDetectorComponentBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void ACloudPlatform::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACloudPlatform, TrackedItems);
}


