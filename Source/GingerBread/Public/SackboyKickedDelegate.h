#pragma once
#include "CoreMinimal.h"
#include "EKickReason.h"
#include "SackboyKickedDelegate.generated.h"

class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSackboyKicked, ASackboy*, Sackboy, EKickReason, eReason);

