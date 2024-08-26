#pragma once
#include "CoreMinimal.h"
#include "CrackContainerDelegateDelegate.generated.h"

class AGroundCrackContainer;
class ASackboy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCrackContainerDelegate, ASackboy*, Sackboy, AGroundCrackContainer*, CrackRef);

