#pragma once
#include "CoreMinimal.h"
#include "TriggerSequencerData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTriggerSequencerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Actors;
    
    GINGERBREAD_API FTriggerSequencerData();
};

