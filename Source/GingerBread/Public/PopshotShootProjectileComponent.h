#pragma once
#include "CoreMinimal.h"
#include "PopshotProjectileBounceParams.h"
#include "PopshotShootBaseComponent.h"
#include "PopshotShootProjectileComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPopshotShootProjectileComponent : public UPopshotShootBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPopshotProjectileBounceParams> BounceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialProjectileRotationRate;
    
    UPopshotShootProjectileComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UnregisterProjectile();
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileDestroyed(AActor* Projectile);
    
};

