#pragma once
#include "CoreMinimal.h"
#include "PinChallengeData.generated.h"

USTRUCT(BlueprintType)
struct FPinChallengeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<int32> EmotesPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastEquippedEmoteId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastEquippedEmotionalState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SurpriseMeUsed;
    
    GINGERBREAD_API FPinChallengeData();
};

