#include "ZipLine.h"
#include "AkComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/ForceFeedbackComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "Net/UnrealNetwork.h"
#include "NetworkEventComponent.h"
#include "ProcStaticMeshComponent.h"
#include "SplineFollowerComponent.h"
#include "SpotShadowComponent.h"
#include "TriggerActorComponent.h"

AZipLine::AZipLine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));

    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->Pulley = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pulley"));
    this->Handle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Handle"));
    this->grabbable = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("grabbable"));
    this->GrabbableTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GrabbableTag"));
    this->AkZipLine = CreateDefaultSubobject<UAkComponent>(TEXT("AkZipLine"));
    this->VFXPulleySparks = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("VFXPulleySparks"));
    this->FFTraversalLoop = CreateDefaultSubobject<UForceFeedbackComponent>(TEXT("FFTraversalLoop"));
    this->AkHaptics = CreateDefaultSubobject<UAkComponent>(TEXT("AkHaptics"));
    this->PhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsCostraint"));
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->WireMesh = CreateDefaultSubobject<UProcStaticMeshComponent>(TEXT("WireMesh"));
    this->FFHitEnd = CreateDefaultSubobject<UForceFeedbackComponent>(TEXT("FFHitEnd"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->SplineFollower = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollower2"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->Collider = NULL;
    this->Audio = CreateDefaultSubobject<UChildActorComponent>(TEXT("Audio"));
    this->NetworkEventComponent = CreateDefaultSubobject<UNetworkEventComponent>(TEXT("NetworkEventComponent"));
    this->UseWorldOverride = false;
    this->WorldOverride = EWorldLocation::Amazon;
    this->UseNewProceduralWireMesh = false;
    this->ShowWireStartMesh = true;
    this->ShowWireEndMesh = true;
    this->IncludeStartMesh = false;
    this->IncludeEndMesh = false;
    this->LineRadius = 0.50f;
    this->SplineCamera = NULL;
    this->TravelTime = 12.00f;
    this->UseDismount = false;
    this->DismountTransforms.AddDefaulted(4);
    this->MovementCurve = NULL;
    this->SafeZone = 75.00f;
    this->DismountZone = 150.00f;
    this->AudioStartMoving = NULL;
    this->AudioStopMoving = NULL;
    this->RTPC_Velocity = TEXT("zipline_velocity");
    this->RTPC_SwingAngle = TEXT("zipline_swing_angle");
    this->VibrationStartMoving = NULL;
    this->VibrationStopMoving = NULL;
    this->SplineMeshStaticMesh = NULL;
    this->SplineEndMeshStaticMesh = NULL;
    this->EndSplinePoint = 0;
    this->ReachedEnd = false;
    this->AkZipLine->SetupAttachment(Handle);
    this->VFXPulleySparks->SetupAttachment(Handle);
    this->FFTraversalLoop->SetupAttachment(Handle);
    this->AkHaptics->SetupAttachment(Handle);
    this->PhysicsConstraint->SetupAttachment(RootComponent);
    this->Spline->SetupAttachment(RootComponent);
    this->WireMesh->SetupAttachment(Spline);
    this->FFHitEnd->SetupAttachment(RootComponent);
    this->SpotShadow->SetupAttachment(RootComponent);
    this->Pulley->SetupAttachment(RootComponent);
    this->Handle->SetupAttachment(Pulley);
    this->grabbable->SetupAttachment(Handle);
    this->GrabbableTag->SetupAttachment(grabbable);
}


void AZipLine::OnSackboyDeath(ASackboy* Sackboy) {
}

void AZipLine::OnRep_ReachedEnd() {
}

void AZipLine::OnNetworkEvent(FName EventName) {
}

void AZipLine::EndPointReached(USplineFollowerComponent* _SplineFollower, bool WasTravellingForward, int32 SplinePointIndex) {
}

void AZipLine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AZipLine, ReachedEnd);
}


