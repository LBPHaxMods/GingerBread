#include "GrabWheelSwitch.h"
#include "AkComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AGrabWheelSwitch::AGrabWheelSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->Root = (USceneComponent*)RootComponent;
    this->VisibleWheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisibleWheel"));
    this->PhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsConstraint"));
    this->GrabSponge = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrabSponge"));
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->TriggerComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_GrabWheelSwitch"));
    this->AkHapticsComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_HapticsGrabWheelSwitch"));
    this->SnapToTL = CreateDefaultSubobject<UTimelineComponent>(TEXT("SnapToTL"));
    this->bApplyEndStops = false;
    this->bReverse = false;
    this->bConstantRotation = false;
    this->Speed = 10.00f;
    this->GrabWheelStartAudio = NULL;
    this->GrabWheelStopAudio = NULL;
    this->GrabWheelEndAudio = NULL;
    this->GrabWheelStartHaptic = NULL;
    this->GrabWheelStopHaptic = NULL;
    this->GrabWheelEndHaptic = NULL;
    this->GrabWheelStartGamepadAudio = NULL;
    this->GrabWheelStopGamepadAudio = NULL;
    this->GrabWheelEndGamepadAudio = NULL;
    this->LerpSpeed = 0.20f;
    this->VelocityToPlayAudio = 20.00f;
    this->CallToSleepDelay = 2.00f;
    this->SnapFloatCurve = NULL;
    this->AuthState = EGrabWheelState::Idle;
    this->TotalAngularDisplacement = 0.00f;
    this->bHasPlayedStartAudio = false;
    this->VisibleWheel->SetupAttachment(GrabSponge);
    this->PhysicsConstraint->SetupAttachment(GrabSponge);
    this->GrabSponge->SetupAttachment(RootComponent);
    this->BaseMesh->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(GrabSponge);
    this->GrappleTarget->SetupAttachment(GrabSponge);
    this->AkComponent->SetupAttachment(RootComponent);
    this->AkHapticsComponent->SetupAttachment(RootComponent);
}


void AGrabWheelSwitch::SnapTLUpdate(float InAlpha) {
}

void AGrabWheelSwitch::SetAuthStateToSleep() {
}

void AGrabWheelSwitch::OnRep_AuthState() {
}

void AGrabWheelSwitch::OnRep_AUTHHandlePosition() {
}

void AGrabWheelSwitch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGrabWheelSwitch, AUTHHandlePosition);
    DOREPLIFETIME(AGrabWheelSwitch, AuthState);
    DOREPLIFETIME(AGrabWheelSwitch, TotalAngularDisplacement);
    DOREPLIFETIME(AGrabWheelSwitch, bHasPlayedStartAudio);
}


