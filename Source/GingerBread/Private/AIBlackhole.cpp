#include "AIBlackhole.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

AAIBlackhole::AAIBlackhole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SackboySuckSpeedCurve = NULL;
    this->SackboyPerpendicularSuckSpeedCurve = NULL;
    this->NonSackboySuckSpeedCurve = NULL;
    this->NonSackboyPerpendicularSuckSpeedCurve = NULL;
    this->GrowTime = 1.00f;
    this->ShrinkAutomatically = true;
    this->StayTime = 1.50f;
    this->ShrinkTime = 1.00f;
    this->MaxRadius = 25.00f;
    this->HalfHeight = 3.50f;
    this->InnerBallMaxRadius = 3.00f;
    this->SizeAdjustmentSpeed = 30.00f;
    this->NonSackboyVelyInterpTime = 0.50f;
    this->BlackholeEjectAngle = 0.00f;
    this->BlackholeAffectationTag = TEXT("BlackholeAffected");
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->InnerSphereComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InnerSphere"));
    this->OuterSphereComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OuterSphere"));
    this->InnerSphereComponent->SetupAttachment(RootComponent);
    this->OuterSphereComponent->SetupAttachment(RootComponent);
}

bool AAIBlackhole::TryAddBlackholeAffectedActorIfOverlapping(AActor* Actor, UPrimitiveComponent* PrimitiveComponent) {
    return false;
}

bool AAIBlackhole::TryAddBlackholeAffectedActor(AActor* Actor, UPrimitiveComponent* PrimitiveComponent) {
    return false;
}

void AAIBlackhole::TriggerBlackHole() {
}

void AAIBlackhole::ShrinkBlackHole() {
}

void AAIBlackhole::SetUp_Implementation() {
}

void AAIBlackhole::SetBlackholeAffectedActorVelocity(AActor* Actor, const FVector& Velocity) {
}

void AAIBlackhole::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AAIBlackhole::IsActive() const {
    return false;
}

TArray<AActor*> AAIBlackhole::GetBlackholeAffectedActors() {
    return TArray<AActor*>();
}

void AAIBlackhole::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAIBlackhole, GrowTime);
    DOREPLIFETIME(AAIBlackhole, ShrinkAutomatically);
    DOREPLIFETIME(AAIBlackhole, StayTime);
    DOREPLIFETIME(AAIBlackhole, ShrinkTime);
    DOREPLIFETIME(AAIBlackhole, MaxRadius);
    DOREPLIFETIME(AAIBlackhole, HalfHeight);
    DOREPLIFETIME(AAIBlackhole, InnerBallMaxRadius);
    DOREPLIFETIME(AAIBlackhole, SizeAdjustmentSpeed);
    DOREPLIFETIME(AAIBlackhole, NonSackboyVelyInterpTime);
    DOREPLIFETIME(AAIBlackhole, BlackholeEjectAngle);
}


