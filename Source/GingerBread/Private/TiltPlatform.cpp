#include "TiltPlatform.h"
#include "AkComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "InteractionComponent.h"
#include "PoIComponent.h"
#include "TriggerActorComponent.h"

ATiltPlatform::ATiltPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base"));

    this->Base = (UStaticMeshComponent*)RootComponent;
    this->ActivateCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ActivateCollision"));
    this->ActivateInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("ActivateInteract"));
    this->PhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsConstraint"));
    this->DeactivateCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("DeactivateCollision"));
    this->DeactivateInteract = CreateDefaultSubobject<UInteractionComponent>(TEXT("DeactivateInteract"));
    this->UpCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("UpCollision"));
    this->DownCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("DownCollision"));
    this->LeftCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftCollision"));
    this->RightCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("RightCollision"));
    this->Visuals = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visuals"));
    this->POIRoot = CreateDefaultSubobject<USceneComponent>(TEXT("POIRoot"));
    this->PoIComponent = CreateDefaultSubobject<UPoIComponent>(TEXT("PoIComponent"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->UnderCarriageVisuals = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UnderCarriageVisuals"));
    this->PSRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PSRoot"));
    this->UpPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("UpPS"));
    this->DownPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DownPS"));
    this->LeftPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LeftPS"));
    this->RightPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("RightPS"));
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->TiltPlatformColourChange = CreateDefaultSubobject<UTimelineComponent>(TEXT("TiltPlatformColourChange"));
    this->TiltPlatformPowerDownColour = CreateDefaultSubobject<UTimelineComponent>(TEXT("TiltPlatformPowerDownColour"));
    this->TiltPlatformPowerUp = CreateDefaultSubobject<UTimelineComponent>(TEXT("TiltPlatformPowerUp"));
    this->BouncePlatformTL = CreateDefaultSubobject<UTimelineComponent>(TEXT("BouncePlatform"));
    this->Ak_TiltPlatform = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_TiltPlatform"));
    this->AkHapticsComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkHapticsComponent"));
    this->LockXAxis = false;
    this->LockYAxis = false;
    this->UseLocalRotation = false;
    this->ArchetypeLockXAxis = false;
    this->ArchetypeLockYAxis = false;
    this->TiltMultiplier = 5.00f;
    this->MovementSpeed = 65.00f;
    this->MovementSmoothing = 0.00f;
    this->XMultiplier = 3.50f;
    this->YMultiplier = 3.50f;
    this->InputMultiplier = 2.40f;
    this->Acceleration = 3.50f;
    this->AccelerationCurve = NULL;
    this->LinearCurve = NULL;
    this->MaxDMIEmissiveIntensity = 60.00f;
    this->BaseColour = NULL;
    this->MediumPlatform = true;
    this->TopVisualsMeshYLock = NULL;
    this->TopVisualsMeshXLock = NULL;
    this->TopVisualsMeshNoLock = NULL;
    this->TiltDeadzone = 0.15f;
    this->TiltFilterThreshold = 10.00f;
    this->TiltPlatformStartupAudio = NULL;
    this->TiltPlatformShutDownAudio = NULL;
    this->TiltPlatformClickAudio = NULL;
    this->MoveSpeedRTPCName = TEXT("vib_tiltplatform_speed");
    this->PlayMovingLoopHaptics = NULL;
    this->StopMovingLoopHaptics = NULL;
    this->BouncePlatformAlphaCurve = NULL;
    this->TiltPlatformColourChangeAlphaCurve = NULL;
    this->TiltPlatformPowerDownColourAlphaCurve = NULL;
    this->TiltPlatformPowerUpAlphaCurve = NULL;
    this->TiltPlatformControlScheme = NULL;
    this->ActivateCollision->SetupAttachment(RootComponent);
    this->ActivateInteract->SetupAttachment(RootComponent);
    this->PhysicsConstraint->SetupAttachment(RootComponent);
    this->DeactivateCollision->SetupAttachment(RootComponent);
    this->DeactivateInteract->SetupAttachment(RootComponent);
    this->UpCollision->SetupAttachment(RootComponent);
    this->DownCollision->SetupAttachment(RootComponent);
    this->LeftCollision->SetupAttachment(RootComponent);
    this->RightCollision->SetupAttachment(RootComponent);
    this->Visuals->SetupAttachment(RootComponent);
    this->POIRoot->SetupAttachment(RootComponent);
    this->PoIComponent->SetupAttachment(POIRoot);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->UnderCarriageVisuals->SetupAttachment(RootComponent);
    this->PSRoot->SetupAttachment(UnderCarriageVisuals);
    this->UpPS->SetupAttachment(PSRoot);
    this->DownPS->SetupAttachment(PSRoot);
    this->LeftPS->SetupAttachment(PSRoot);
    this->RightPS->SetupAttachment(PSRoot);
    this->Box->SetupAttachment(Visuals);
    this->Arrow->SetupAttachment(RootComponent);
    this->Ak_TiltPlatform->SetupAttachment(RootComponent);
    this->AkHapticsComponent->SetupAttachment(RootComponent);
}

void ATiltPlatform::UpdateVisuals_Implementation(const FVector AxisValue) {
}

void ATiltPlatform::TiltEvent(AGingerbreadPlayerController* PlayerController, FVector AxisValue) {
}

void ATiltPlatform::StickYEvent(AGingerbreadPlayerController* PlayerController, float AxisValue) {
}

void ATiltPlatform::StickXEvent(AGingerbreadPlayerController* PlayerController, float AxisValue) {
}

void ATiltPlatform::SetVelocity_Implementation(const FVector NewVel) {
}

void ATiltPlatform::SetPlayerColourEmissiveIntensity(const float Alpha) {
}

void ATiltPlatform::OnVisualsMoveCompleted() {
}

void ATiltPlatform::OnSwitchController_Implementation(ASackboy* OldController, ASackboy* NewController) {
}

void ATiltPlatform::OnStopControlling_Implementation(ASackboy* Sackboy) {
}

void ATiltPlatform::OnStartControlling_Implementation(ASackboy* Sackboy) {
}

void ATiltPlatform::BouncePlatform_Update(const float Alpha) {
}



