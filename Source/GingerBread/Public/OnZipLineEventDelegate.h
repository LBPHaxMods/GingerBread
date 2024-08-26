#pragma once
#include "CoreMinimal.h"
#include "OnZipLineEventDelegate.generated.h"

class AZipLine;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZipLineEvent, AZipLine*, ZipLine);

