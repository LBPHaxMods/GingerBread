#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VexFinalTransformedSackboyUntransformDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVexFinalTransformedSackboyUntransformDelegate, const FVector&, UntransformLocation);

