#pragma once
#include "CoreMinimal.h"
#include "ButtonatorClickedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonatorClickedSignature, const FString&, ButtonID);

