#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "JumpyTurretActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UJumpyTurretActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UJumpyTurretActionComponent(const FObjectInitializer& ObjectInitializer);

};

