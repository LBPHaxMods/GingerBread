#include "PogoStick.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameplayTagComponent.h"
#include "VirtualConstraintComponent.h"

APogoStick::APogoStick(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->VirtualConstraint = CreateDefaultSubobject<UVirtualConstraintComponent>(TEXT("Virtual Constraint Component"));
    this->ShouldClearRayTransformRotation = false;
    this->RayOffsets.AddDefaulted(4);
    this->RayLengths.AddDefaulted(4);
    this->ChargedStompAOERadius = 8.00f;
    this->ChargedStompAOEHeight = 24.00f;
    this->ChargedStompAOEForce = 1500.00f;
    this->ChargedStompGroundTime = 0.25f;
    this->MinOnGroundTime = 0.12f;
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AK Component"));
    this->GameplayTagComponent = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("Gameplay Tag Component"));
    this->PogoStickMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Pogo Stick Mesh"));
    this->SeatSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Seat Node"));

    this->AnimInstance = NULL;
    this->PogostickBounceAudio = NULL;
    this->PogostickChargedJumpAudio = NULL;
    this->PogostickChargedStompAudio = NULL;
    this->PogostickLandedAudio = NULL;
    this->PogostickStartChargingAudio = NULL;
    this->PogostickEvadeAudio = NULL;
    this->PogostickMiniEvadeAudio = NULL;
    this->PogostickEnterAudio = NULL;
    this->PogostickExitAudio = NULL;
    this->PogostickHeadStompStartAudio = NULL;
    this->PogostickHeadStompLandedAudio = NULL;
    this->PogostickJumpTypeRTPC = TEXT("pogostick_jump_type");
    this->EvadeTime = 0.73f;
    this->AkComponent->SetupAttachment(RootComponent);
    this->GameplayTagComponent->SetupAttachment(RootComponent);
    this->PogoStickMesh->SetupAttachment(RootComponent);
    this->SeatSceneComponent->SetupAttachment(PogoStickMesh);
}



