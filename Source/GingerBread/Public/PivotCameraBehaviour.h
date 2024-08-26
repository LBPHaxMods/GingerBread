#pragma once
#include "CoreMinimal.h"
#include "CameraBehaviour.h"
#include "PivotCameraBehaviour.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UPivotCameraBehaviour : public UCameraBehaviour {
    GENERATED_BODY()
public:
    UPivotCameraBehaviour(const FObjectInitializer& ObjectInitializer);

};

