#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JointVisualiser.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API AJointVisualiser : public AActor {
    GENERATED_BODY()
public:
    AJointVisualiser(const FObjectInitializer& ObjectInitializer);

};

