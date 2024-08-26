#pragma once
#include "CoreMinimal.h"
#include "Leaderboard_BoardCreateData.h"
#include "Leaderboard_SubmitScoreOptions.generated.h"

USTRUCT(BlueprintType)
struct FLeaderboard_SubmitScoreOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool allow_missing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeaderboard_BoardCreateData board;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Attachment;
    
    SONYOTG_API FLeaderboard_SubmitScoreOptions();
};

