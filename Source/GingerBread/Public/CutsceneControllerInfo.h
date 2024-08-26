#pragma once
#include "CoreMinimal.h"
#include "CutsceneControllerInfo.generated.h"

class AGingerbreadLevelSequenceActor;

USTRUCT(BlueprintType)
struct FCutsceneControllerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadLevelSequenceActor* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CutsceneTriggersTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CutsceneActorsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDebugMode;
    
    GINGERBREAD_API FCutsceneControllerInfo();
};

