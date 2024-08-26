#pragma once
#include "CoreMinimal.h"
#include "CameraBehaviour.h"
#include "EndSequenceCameraBehaviour.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEndSequenceCameraBehaviour : public UCameraBehaviour {
    GENERATED_BODY()
public:
    UEndSequenceCameraBehaviour(const FObjectInitializer& ObjectInitializer);

};

