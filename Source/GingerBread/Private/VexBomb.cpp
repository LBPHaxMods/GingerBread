#include "VexBomb.h"
#include "AkComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameplayTagComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "SpotShadowComponent.h"

AVexBomb::AVexBomb(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
    this->SphereCollision = (USphereComponent*)RootComponent;
    this->SphereInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("SphereInteraction"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->AKVexBomb = CreateDefaultSubobject<UAkComponent>(TEXT("AKVexBomb"));
    this->SpotShadowComponent = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadowComponent"));
    this->BombType = EVexBombType::Invalid;
    this->TimeBeforeFlickerFast = 3.00f;
    this->TimeFlickerFastBeforeWarning = 1.00f;
    this->TimeAfterWarningBeforeBoom = 1.00f;
    this->TimeAfterDroppedToExplode = 2.00f;
    this->HitRollerImpulse = 300.00f;
    this->DefaultLinearDamping = 0.15f;
    this->LandedLinearDamping = 0.15f;
    this->ExplosionActorClass = NULL;
    this->ScoreBubblesToSpawnOnDamagedBoss = 6;
    this->SpinSpeed = 180.00f;
    this->ConveyorCheckerActorClass = NULL;
    this->OnConveyorInitialXSpeedMultiplier = 0.35f;
    this->OnConveyorInitialYSpeedMultiplier = 0.15f;
    this->OnConveyorIdealXSpeed = 15.00f;
    this->OnConveyorTimeToLerpToZeroVelocity = 1.20f;
    this->OnConveyorTimeToLerpToIdealSpeedFromZero = 0.80f;
    this->SphereInteraction->SetupAttachment(RootComponent);
    this->StaticMesh->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->AKVexBomb->SetupAttachment(RootComponent);
    this->SpotShadowComponent->SetupAttachment(StaticMesh);
}

void AVexBomb::TogglePhysics(bool Enable) {
}



void AVexBomb::OnSphereCollisionHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AVexBomb::OnSphereCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AVexBomb::OnSphereCollisionBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}





void AVexBomb::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexBomb, BombType);
}


