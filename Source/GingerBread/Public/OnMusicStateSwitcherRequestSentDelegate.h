#pragma once
#include "CoreMinimal.h"
#include "OnMusicStateSwitcherRequestSentDelegate.generated.h"

class AMusicStateSwitcher;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMusicStateSwitcherRequestSent, AMusicStateSwitcher*, MusicStateSwitcher, FName, RequestedMusicState);

