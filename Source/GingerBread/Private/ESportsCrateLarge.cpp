#include "ESportsCrateLarge.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"

AESportsCrateLarge::AESportsCrateLarge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShakeAnimTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("ShakeAnimTimeline"));
    this->DamagedCrateStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DamagedCrateStaticMesh"));
    this->DamagedAudioEvent = NULL;
    this->ShakeIntensityCurve = NULL;
    this->ShakeDirectionCurve = NULL;
    this->ShakeAnimPlayRate = 4.00f;
    this->MinCrushDamageVelocity = 40.00f;
    this->DamagedCrateStaticMesh->SetupAttachment(RootComponent);
}

void AESportsCrateLarge::ShakePostUpdate() {
}

void AESportsCrateLarge::ShakeIntensityAnimUpdate(float Value) {
}

void AESportsCrateLarge::ShakeDirectionAnimUpdate(const FVector& Value) {
}

void AESportsCrateLarge::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

void AESportsCrateLarge::InvokeDamageEffectsMulticast_Implementation() {
}


