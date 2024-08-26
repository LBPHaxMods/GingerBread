#include "CrateLarge.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"

ACrateLarge::ACrateLarge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShakeAnimTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ShakeAnimTimeline"));
    this->DamagedCrateStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DamagedCrateStaticMesh"));
    this->DamagedAudioEvent = NULL;
    this->ShakeIntensityCurve = NULL;
    this->ShakeDirectionCurve = NULL;
    this->ShakeAnimPlayRate = 4.00f;
    this->MinCrushDamageVelocity = 40.00f;
    this->DamagedCrateStaticMesh->SetupAttachment(RootComponent);
}

void ACrateLarge::ShakePostUpdate() {
}

void ACrateLarge::ShakeIntensityAnimUpdate(float Value) {
}

void ACrateLarge::ShakeDirectionAnimUpdate(const FVector& Value) {
}

void ACrateLarge::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void ACrateLarge::InvokeDamageEffectsMulticast_Implementation() {
}


