#include "YetiKing.h"
#include "AkComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SplineComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SplineFollowerComponent.h"

AYetiKing::AYetiKing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("YetiChaseRoot"));
    this->YetiChaseRoot = (USceneComponent*)RootComponent;
    this->SplinePath = CreateDefaultSubobject<USplineComponent>(TEXT("SplinePath"));
    this->YetiKingRoot = CreateDefaultSubobject<USceneComponent>(TEXT("YetiKingRoot"));
    this->Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    this->SphereInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("SphereInteraction"));
    this->CapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollision"));
    this->CapsuleInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("CapsuleInteraction"));
    this->YetiKingSkeleton = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("YetiKingSkeleton"));
    this->Ak_YetiKing = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_YetiKing"));
    this->AkHaptic_YetiKing = CreateDefaultSubobject<UAkComponent>(TEXT("AkHaptic_YetiKing"));
    this->SplineFollower = CreateDefaultSubobject<USplineFollowerComponent>(TEXT("SplineFollower"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->HitPointsModifierForBody = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifierForBody"));
    this->YetiRadius = 30.00f;
    this->StartRolling = NULL;
    this->StopRolling = NULL;
    this->StartRollingHaptic = NULL;
    this->StopRollingHaptic = NULL;
    this->MaxSpeed = 50.00f;
    this->MinSpeed = 2.00f;
    this->MaxSpeedDistance = 70.00f;
    this->Acceleration = 30.00f;
    this->Deceleration = 60.00f;
    this->bUseNearestSackboy = true;
    this->FallAngleThreshold = 0.95f;
    this->DisableOriginalOverlapsOnFirstTriggerOverlap = true;
    this->CurrentState = EYetiKingState::Idle;
    this->SplinePath->SetupAttachment(RootComponent);
    this->YetiKingRoot->SetupAttachment(RootComponent);
    this->Collision->SetupAttachment(YetiKingSkeleton);
    this->SphereInteraction->SetupAttachment(Collision);
    this->CapsuleCollision->SetupAttachment(YetiKingSkeleton);
    this->CapsuleInteraction->SetupAttachment(CapsuleCollision);
    this->YetiKingSkeleton->SetupAttachment(YetiKingRoot);
    this->Ak_YetiKing->SetupAttachment(YetiKingSkeleton);
    this->AkHaptic_YetiKing->SetupAttachment(YetiKingSkeleton);
}

void AYetiKing::StartFalling() {
}

void AYetiKing::SplineEndReached(USplineFollowerComponent* NewSplineFollower, bool WasTravellingForward) {
}

void AYetiKing::OnRep_CurrentState() {
}

void AYetiKing::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AYetiKing::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AYetiKing, CurrentState);
}


