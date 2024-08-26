#pragma once
#include "CoreMinimal.h"
#include "OnCreditsVoteForSkipDelegate.generated.h"

class AGingerbreadPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreditsVoteForSkip, AGingerbreadPlayerController*, PlayerController);

