#include "InteractiveLogo.h"
#include "AkComponent.h"
#include "CableComponent.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "SMFuzzComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsComponent.h"
#include "InteractionComponent.h"
#include "TriggerActorComponent.h"

AInteractiveLogo::AInteractiveLogo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));

    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->Logo = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Logo"));
    this->SMFuzz = CreateDefaultSubobject<USMFuzzComponent>(TEXT("SMFuzz"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->PhysicsConstraint1 = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsConstraint1"));
    this->PhysicsConstraint2 = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsConstraint2"));
    this->Cable1 = CreateDefaultSubobject<UCableComponent>(TEXT("Cable1"));
    this->Cable2 = CreateDefaultSubobject<UCableComponent>(TEXT("Cable2"));
    this->Ak_Logo = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Logo"));
    this->Ak_Cable1 = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Cable1"));
    this->Ak_Cable2 = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Cable2"));
    this->Ak_Zip = CreateDefaultSubobject<UAkComponent>(TEXT("Ak_Zip"));
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    this->HitPoints = CreateDefaultSubobject<UHitPointsComponent>(TEXT("HitPoints"));
    this->Interaction = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interaction"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->CuttableWires = false;
    this->WireLength = 34.00f;
    this->HitPointImpulseMagnitude = 2.00f;
    this->MinHitImpulseSize = 1.10f;
    this->RTPC_RopeAngle = TEXT("title_screen_rope_angle");
    this->RTPC_RopeVelocity = TEXT("title_screen_rope_velocity");
    this->RTPC_SignImpact = TEXT("title_screen_sign_impact");
    this->RTPC_ZipAngle = TEXT("title_screen_zip_angle");
    this->RTPC_ZipVelocity = TEXT("title_screen_zip_velocity");
    this->RTPC_ZipImpact = TEXT("title_screen_zip_impact");
    this->AudioSignImpact = NULL;
    this->AudioRopeStretch = NULL;
    this->AudioZipImpact = NULL;
    this->AudioZipMovement = NULL;
    this->ZipVelocityMultiplier = 1.00f;
    this->RopeVelocityMultiplier = 1.00f;
    this->ZipImpactMultiplier = 1.00f;
    this->SignImpactMultiplier = 1.00f;
    this->Logo->SetupAttachment(RootComponent);
    this->SMFuzz->SetupAttachment(Logo);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->PhysicsConstraint1->SetupAttachment(RootComponent);
    this->PhysicsConstraint2->SetupAttachment(RootComponent);
    this->Cable1->SetupAttachment(RootComponent);
    this->Cable2->SetupAttachment(RootComponent);
    this->Ak_Logo->SetupAttachment(Logo);
    this->Ak_Cable1->SetupAttachment(Logo);
    this->Ak_Cable2->SetupAttachment(Logo);
    this->Ak_Zip->SetupAttachment(Logo);
    this->Sphere->SetupAttachment(RootComponent);
    this->HitPoints->SetupAttachment(RootComponent);
    this->Interaction->SetupAttachment(RootComponent);
}

void AInteractiveLogo::TriggerDrop() {
}

void AInteractiveLogo::OnLogoHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

FVector AInteractiveLogo::GetLogoPosition() {
    return FVector{};
}


