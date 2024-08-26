#pragma once
#include "CoreMinimal.h"
#include "OnCreditsSequenceVoteForSkipDelegate.generated.h"

class AGingerbreadPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreditsSequenceVoteForSkip, AGingerbreadPlayerController*, PlayerController);

