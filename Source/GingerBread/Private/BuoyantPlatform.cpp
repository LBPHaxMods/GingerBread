#include "BuoyantPlatform.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

ABuoyantPlatform::ABuoyantPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->PlatformCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PlatformCollisionComponent"));
    this->PlatformMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMeshComponent"));
    this->SurfaceDetectionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SurfaceDetectionComponent"));
    this->SurfaceInteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("SurfaceInteractionComponent"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTagComponent"));
    this->HitPointsComponent = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPointsComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_BuoyantPlatform"));
    this->AkHapticsComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_HapticsBuoyantPlatform"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->BobbingMotionTimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("BobbingMotionTimelineComponent"));
    this->SurfaceDetectionMargin = 0.60f;
    this->SurfaceDetectionVerticalExtent = 0.75f;
    this->BobbingMotionDuration = 1.00f;
    this->TiltSpeedMultiplier = 3.00f;
    this->TiltAngleMagicNumber = 255.00f;
    this->MaximumTiltAngle = 15.00f;
    this->PitchAudioRTPCName = TEXT("buoyant_platform_x");
    this->RollAudioRTPCName = TEXT("buoyant_platform_y");
    this->MaximumRTPCValue = 30.00f;
    this->BobbingMotionCurve = NULL;
    this->PlayLoopingAudioEvent = NULL;
    this->StopLoopingAudioEvent = NULL;
    this->JumpOnAudioEvent = NULL;
    this->JumpOffAudioEvent = NULL;
    this->PlayLoopingHapticEvent = NULL;
    this->StopLoopingHapticEvent = NULL;
    this->JumpOnHapticEvent = NULL;
    this->JumpOffHapticEvent = NULL;
    this->AkComponent->SetupAttachment(RootComponent);
    this->AkHapticsComponent->SetupAttachment(SurfaceInteractionComponent);
    this->PlatformCollisionComponent->SetupAttachment(RootComponent);
    this->PlatformMeshComponent->SetupAttachment(PlatformCollisionComponent);
    this->SurfaceDetectionComponent->SetupAttachment(PlatformCollisionComponent);
    this->SurfaceInteractionComponent->SetupAttachment(PlatformCollisionComponent);
    this->GameplayTagComponent->SetupAttachment(PlatformCollisionComponent);
    this->HitPointsComponent->SetupAttachment(RootComponent);
}

void ABuoyantPlatform::OnSurfaceEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void ABuoyantPlatform::OnSurfaceEndInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void ABuoyantPlatform::OnSurfaceBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABuoyantPlatform::OnSurfaceBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp) {
}

void ABuoyantPlatform::OnBobbingMotionTimelineAlphaUpdate(float Alpha) {
}

FName ABuoyantPlatform::GetBuoyantPlaftormIgnoreTag() {
    return NAME_None;
}

void ABuoyantPlatform::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuoyantPlatform, TargetTiltVector);
}


