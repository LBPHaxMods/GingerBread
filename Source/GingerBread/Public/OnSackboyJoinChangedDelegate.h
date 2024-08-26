#pragma once
#include "CoreMinimal.h"
#include "GingerbreadPlayerId.h"
#include "OnSackboyJoinChangedDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSackboyJoinChanged, const FGingerbreadPlayerId&, PlayerId, ASackboy*, Sackboy);

