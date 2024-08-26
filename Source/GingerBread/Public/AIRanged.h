#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AIRanged.generated.h"

class AActor;

UINTERFACE()
class GINGERBREAD_API UAIRanged : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API IAIRanged : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void OnProjectileHit(AActor* HitActor, AActor* Projectile) PURE_VIRTUAL(OnProjectileHit,);
    
    UFUNCTION()
    virtual void OnAOEHit(TArray<AActor*> HitActors, AActor* AOE) PURE_VIRTUAL(OnAOEHit,);
    
};

