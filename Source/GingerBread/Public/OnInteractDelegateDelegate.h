#pragma once
#include "CoreMinimal.h"
#include "OnInteractDelegateDelegate.generated.h"

class AGingerbreadAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractDelegate, AGingerbreadAICharacter*, InteractingAICharacter);

