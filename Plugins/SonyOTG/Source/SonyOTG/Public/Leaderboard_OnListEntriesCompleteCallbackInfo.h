#pragma once
#include "CoreMinimal.h"
#include "Leaderboard_EntryList.h"
#include "Leaderboard_OnListEntriesCompleteCallbackInfo.generated.h"

USTRUCT(BlueprintType)
struct FLeaderboard_OnListEntriesCompleteCallbackInfo : public FLeaderboard_EntryList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString nextPageToken;
    
    SONYOTG_API FLeaderboard_OnListEntriesCompleteCallbackInfo();
};

