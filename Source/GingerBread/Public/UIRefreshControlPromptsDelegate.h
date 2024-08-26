#pragma once
#include "CoreMinimal.h"
#include "UIRefreshControlPromptsDelegate.generated.h"

class AGingerbreadPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUIRefreshControlPrompts, AGingerbreadPlayerController*, PlayerController);

