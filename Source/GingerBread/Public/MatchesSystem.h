#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPlayerJoinDirection.h"
#include "GingerbreadPlayerId.h"
#include "MatchesSystem.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UMatchesSystem : public UObject {
    GENERATED_BODY()
public:
    UMatchesSystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinLeaveEvent(EPlayerJoinDirection Direction, const FGingerbreadPlayerId& player_id, bool IsForcedPlayer);
    
};

