#pragma once
#include "CoreMinimal.h"
#include "OnSkipVoteChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSkipVoteChanged, const int32, NumVotes, const int32, VotesMax);

