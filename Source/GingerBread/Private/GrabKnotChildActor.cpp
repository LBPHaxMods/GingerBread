#include "GrabKnotChildActor.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "GrappleTargetComponent.h"
#include "Net/UnrealNetwork.h"

AGrabKnotChildActor::AGrabKnotChildActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->Base = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base"));
    this->SackboyCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SackboyCollision"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->KnotMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KnotMesh"));
    this->FakeThread = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FakeThread"));
    this->PhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsConstraint"));
    this->GrappleTarget = CreateDefaultSubobject<UGrappleTargetComponent>(TEXT("GrappleTarget"));
    this->Motion = NULL;
    this->Transition = NULL;
    this->GrabTransition = NULL;
    this->MotionLinearOffsetAlphaCurve = NULL;
    this->MotionAngularOffsetAlphaCurve = NULL;
    this->TransitionAlphaCurve = NULL;
    this->GrabTransitionGrabAlphaCurve = NULL;
    this->GrabKnotPullLoop = NULL;
    this->GrabKnotPullLoopStop = NULL;
    this->GrabKnotRetractLoop = NULL;
    this->GrabKnotRetractLoopStop = NULL;
    this->GrabKnotGamepadPullLoop = NULL;
    this->GrabKnotGamepadPullLoopStop = NULL;
    this->GrabKnotGamepadRetractLoop = NULL;
    this->GrabKnotGamepadRetractLoopStop = NULL;
    this->GrabKnotSnap = NULL;
    this->GrabKnotHapticsLoop = NULL;
    this->GrabKnotHapticsLoopStop = NULL;
    this->RegrabbableDelay = 0.25f;
    this->Sackboy = NULL;
    this->AtMaximumLength = false;
    this->Base->SetupAttachment(RootComponent);
    this->SackboyCollision->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(SackboyCollision);
    this->KnotMesh->SetupAttachment(SackboyCollision);
    this->FakeThread->SetupAttachment(RootComponent);
    this->PhysicsConstraint->SetupAttachment(RootComponent);
    this->GrappleTarget->SetupAttachment(SackboyCollision);
}

void AGrabKnotChildActor::TransitionAlpha_TimelineFunc(float Alpha) {
}

void AGrabKnotChildActor::SetGrabbableTags(const bool Enable) {
}

void AGrabKnotChildActor::OnRep_Sackboy() {
}

void AGrabKnotChildActor::MotionLinearOffsetAlpha_TimelineFunc(float LinearOffsetAlpha) {
}

void AGrabKnotChildActor::MotionAngularOffsetAlpha_TimelineFunc(float AngularOffsetAlpha) {
}

void AGrabKnotChildActor::GrabTransitionAlpha_TimelineFunc(float _GrabAlpha) {
}

void AGrabKnotChildActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGrabKnotChildActor, Sackboy);
    DOREPLIFETIME(AGrabKnotChildActor, AtMaximumLength);
}


