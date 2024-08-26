#pragma once
#include "CoreMinimal.h"
#include "NaomiSecretFileGenericEventDelegate.generated.h"

class ANaomiSecretFile;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNaomiSecretFileGenericEvent, ANaomiSecretFile*, SecretFile);

