#include "Enemy_Projectile_Base.h"

AEnemy_Projectile_Base::AEnemy_Projectile_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LifeSpanAfterHit = 0.05f;
}

void AEnemy_Projectile_Base::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AEnemy_Projectile_Base::OnHitActor(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}


