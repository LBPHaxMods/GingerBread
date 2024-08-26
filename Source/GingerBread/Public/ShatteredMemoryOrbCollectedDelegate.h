#pragma once
#include "CoreMinimal.h"
#include "ShatteredMemoryOrbCollectedDelegate.generated.h"

class ASackboy;
class AShatteredMemoryOrb;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FShatteredMemoryOrbCollected, AShatteredMemoryOrb*, Orb, ASackboy*, CollectingSackboy);

