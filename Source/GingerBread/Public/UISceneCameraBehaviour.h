#pragma once
#include "CoreMinimal.h"
#include "CameraBehaviour.h"
#include "UISceneCameraBehaviour.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UUISceneCameraBehaviour : public UCameraBehaviour {
    GENERATED_BODY()
public:
    UUISceneCameraBehaviour(const FObjectInitializer& ObjectInitializer);

};

