#pragma once
#include "CoreMinimal.h"
#include "EWAMMoleReqPlayerEnum.generated.h"

UENUM(BlueprintType)
namespace EWAMMoleReqPlayerEnum {
    enum Type {
        AnyNumberOfPlayers,
        TwoPlayersOrMore,
        ThreePlayersOrMore,
        FourPlayersOrMore,
    };
}

