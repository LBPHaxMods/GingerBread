#pragma once
#include "CoreMinimal.h"
#include "CapturedSackboyDelegate.generated.h"

class ACrumpler;
class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCapturedSackboy, ACrumpler*, Crumpler, ASackboy*, Sackboy);

