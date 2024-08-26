#pragma once
#include "CoreMinimal.h"
#include "WAMBaseController.h"
#include "WAMScriptedController.generated.h"

UCLASS(Blueprintable)
class AWAMScriptedController : public AWAMBaseController {
    GENERATED_BODY()
public:
    AWAMScriptedController(const FObjectInitializer& ObjectInitializer);

};

