#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "BoomerangMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UBoomerangMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UBoomerangMovementComponent(const FObjectInitializer& ObjectInitializer);

};

