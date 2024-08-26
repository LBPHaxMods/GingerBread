#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TimedChallengeDataAsset.generated.h"

UCLASS(Blueprintable)
class UTimedChallengeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStartAfterLevelReset;
    
    UTimedChallengeDataAsset();

};

