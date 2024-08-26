#pragma once
#include "CoreMinimal.h"
#include "GingerbreadManager.h"
#include "TutorialTriggerInjector.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API ATutorialTriggerInjector : public AGingerbreadManager {
    GENERATED_BODY()
public:
    ATutorialTriggerInjector(const FObjectInitializer& ObjectInitializer);

};

