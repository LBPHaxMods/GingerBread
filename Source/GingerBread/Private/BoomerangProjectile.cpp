#include "BoomerangProjectile.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/VectorFieldComponent.h"
#include "GameplayTagComponent.h"
#include "InteractionComponent.h"
#include "RegistrationComponent.h"
#include "SpotShadowComponent.h"

ABoomerangProjectile::ABoomerangProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
    this->CraftCutterMasterMaterial = NULL;
    this->CraftCutterDynamicMaterial = NULL;
    this->Collision = (UPrimitiveComponent*)RootComponent;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->InteractionCollider = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interaction"));
    this->SpotShadow = CreateDefaultSubobject<USpotShadowComponent>(TEXT("SpotShadow"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->RegistrationTag = CreateDefaultSubobject<URegistrationComponent>(TEXT("RegistrationTag"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->CCVectorField = CreateDefaultSubobject<UVectorFieldComponent>(TEXT("CCVectorField"));
    this->InAirVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("InAirVFX"));
    this->BoomerangDestroyedClass = NULL;
    this->ThrowingSackboy = NULL;
    this->CatchAudioEvent = NULL;
    this->BounceAudioEvent = NULL;
    this->ThrowLoopAudioEvent = NULL;
    this->ThrowLoopStopAudioEvent = NULL;
    this->DestroyAudioEvent = NULL;
    this->ThrowGamepadHapticEvent = NULL;
    this->ThrowHapticEvent = NULL;
    this->CatchGamepadHapticEvent = NULL;
    this->CatchSpatialHapticEvent = NULL;
    this->BounceVibration = NULL;
    this->CatchVibration = NULL;
    this->ThrowVibration = NULL;
    this->BounceShake = NULL;
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->InteractionCollider->SetupAttachment(RootComponent);
    this->SpotShadow->SetupAttachment(SkeletalMesh);
    this->GameplayTag->SetupAttachment(RootComponent);
    this->RegistrationTag->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->CCVectorField->SetupAttachment(RootComponent);
    this->InAirVFX->SetupAttachment(RootComponent);
}

void ABoomerangProjectile::UpdateMaterials() {
}

void ABoomerangProjectile::Unpause() {
}

void ABoomerangProjectile::Teleport(FVector Position, FRotator Rotation, float Speed, float Duration, bool rethrow) {
}

void ABoomerangProjectile::SetCollision(bool enable_collision, bool enable_overlaps) {
}

void ABoomerangProjectile::SetAnimState(EBoomerangAnimState State) {
}

bool ABoomerangProjectile::ReturnToSackboy() {
    return false;
}

void ABoomerangProjectile::PAUSE() {
}

void ABoomerangProjectile::OnInterruptFlight(FVector force_direction) {
}

bool ABoomerangProjectile::IsPaused() {
    return false;
}

bool ABoomerangProjectile::IsFlying() const {
    return false;
}

void ABoomerangProjectile::HoverBoomerang(float Time) {
}

bool ABoomerangProjectile::ExitTheWhirlwind(USceneComponent* Target, bool bInstant) {
    return false;
}

bool ABoomerangProjectile::EnterTheWhirlwind(USceneComponent* Target, float Distance, float Speed, int32 revolutions, const FVector& local_axis) {
    return false;
}

FVector ABoomerangProjectile::CalculateCatchHapticsOrigin() const {
    return FVector{};
}


