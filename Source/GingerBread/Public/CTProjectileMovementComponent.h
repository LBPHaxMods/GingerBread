#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "CTProjectileMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UCTProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UCTProjectileMovementComponent(const FObjectInitializer& ObjectInitializer);

};

