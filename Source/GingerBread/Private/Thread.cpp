#include "Thread.h"
#include "AkComponent.h"
#include "CableComponent.h"
#include "Components/BoxComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "CraftCutterTargetComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AThread::AThread(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CableStart"));

    this->CableStart = (USceneComponent*)RootComponent;
    this->CableEnd = CreateDefaultSubobject<USceneComponent>(TEXT("CableEnd"));
    this->ConstraintStart = CreateDefaultSubobject<USphereComponent>(TEXT("ConstraintStart"));
    this->ConstraintEnd = CreateDefaultSubobject<USphereComponent>(TEXT("ConstraintEnd"));
    this->PhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsConstraint"));
    this->Cable = CreateDefaultSubobject<UCableComponent>(TEXT("Cable"));
    this->HitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("HitBox"));
    this->HitInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("HitInteraction"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->Ak_Thread = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Thread"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->WorldSelection = EWorldLocation::Craftworld;
    this->ExtraLength = 0.00f;
    this->MinCuttableLength = 2.00f;
    this->CableCollision = false;
    this->TimeToDie = 5.00f;
    this->AmazonMaterial = NULL;
    this->UnderseaMaterial = NULL;
    this->HimalayasMaterial = NULL;
    this->SpaceMaterial = NULL;
    this->CraftworldMaterial = NULL;
    this->VoidMaterial = NULL;
    this->FrayMesh = NULL;
    this->CutRopeAudio = NULL;
    this->ThreadLengthServer = 0.00f;
    this->HitInteraction->SetupAttachment(RootComponent);
    this->CraftCutterTarget->SetupAttachment(HitInteraction);
    this->Ak_Thread->SetupAttachment(RootComponent);
    this->HitPoints->SetupAttachment(RootComponent);
    this->CableEnd->SetupAttachment(RootComponent);
    this->ConstraintStart->SetupAttachment(RootComponent);
    this->ConstraintEnd->SetupAttachment(RootComponent);
    this->PhysicsConstraint->SetupAttachment(RootComponent);
    this->Cable->SetupAttachment(RootComponent);
    this->HitBox->SetupAttachment(RootComponent);
}

void AThread::OnRep_ThreadLengthServer() {
}

void AThread::OnRep_ThreadCutData() {
}

void AThread::OnActorDisconnected_Implementation(AActor* Actor, const FVector& Impulse) {
}

void AThread::OnActorDestroyed(AActor* Actor) {
}

void AThread::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AThread, ThreadCutData);
    DOREPLIFETIME(AThread, ThreadLengthServer);
}


