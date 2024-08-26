#pragma once
#include "CoreMinimal.h"
#include "OneShotDelegateDelegate.generated.h"

class UTouchScreenAppBouncePadComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOneShotDelegate, UTouchScreenAppBouncePadComponent*, BouncePadApp);

