#pragma once
#include "CoreMinimal.h"
#include "InCutsceneTask.h"
#include "InTimeDilationDeathCutsceneTask.generated.h"

UCLASS(Blueprintable)
class UInTimeDilationDeathCutsceneTask : public UInCutsceneTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathDilationDuration;
    
public:
    UInTimeDilationDeathCutsceneTask();

};

