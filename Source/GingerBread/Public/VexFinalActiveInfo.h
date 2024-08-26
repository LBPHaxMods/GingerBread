#pragma once
#include "CoreMinimal.h"
#include "EVexFinalVoiceLineTriggerType.h"
#include "EVexFinalVoiceLineType.h"
#include "VexFinalVoiceLine.h"
#include "VexFinalActiveInfo.generated.h"

class AVexFinalEncounter;

USTRUCT(BlueprintType)
struct FVexFinalActiveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVexFinalVoiceLineTriggerType TriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVexFinalVoiceLineType VoiceLineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalVoiceLine VoiceLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AVexFinalEncounter> Vex;
    
    GINGERBREAD_API FVexFinalActiveInfo();
};

