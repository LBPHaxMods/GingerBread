#pragma once
#include "CoreMinimal.h"
#include "VexFinalTransformedSackboyTransformDelegateDelegate.generated.h"

class AGingerbreadAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVexFinalTransformedSackboyTransformDelegate, AGingerbreadAICharacter*, AI);

