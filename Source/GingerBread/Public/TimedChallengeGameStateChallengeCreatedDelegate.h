#pragma once
#include "CoreMinimal.h"
#include "TimedChallengeGameStateChallengeCreatedDelegate.generated.h"

class ATimedChallenge;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimedChallengeGameStateChallengeCreated, ATimedChallenge*, TimedChallenge);

