#pragma once

#include "CoreMinimal.h"
#include "UnlockType.generated.h"

UENUM(BlueprintType)
enum class UnlockType : uint8
{
	None                           = 0,
	DLC                            = 1,
	CostumeShop                    = 2,
	PrizeBubble                    = 3,
	EmoteSystem                    = 4,
	Multiplayer                    = 5,
	UnlockType_MAX                 = 6,
};