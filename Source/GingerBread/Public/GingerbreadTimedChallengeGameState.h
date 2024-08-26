#pragma once
#include "CoreMinimal.h"
#include "EObjectValidity.h"
#include "GingerbreadGameState.h"
#include "GingerbreadTimedChallengeGameState.generated.h"

class AGingerbreadTimedChallengeGameState;
class UObject;

UCLASS(Blueprintable)
class AGingerbreadTimedChallengeGameState : public AGingerbreadGameState {
    GENERATED_BODY()
public:
    AGingerbreadTimedChallengeGameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetTimedChallengeGameState(const UObject* WorldContextObject, AGingerbreadTimedChallengeGameState*& TimedChallengeGameState, EObjectValidity& Out_GameStateValidity);
    
};

