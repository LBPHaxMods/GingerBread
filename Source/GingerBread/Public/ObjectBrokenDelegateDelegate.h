#pragma once
#include "CoreMinimal.h"
#include "ObjectBrokenDelegateDelegate.generated.h"

class AThrowableObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FObjectBrokenDelegate, AThrowableObject*, ObjectReference);

