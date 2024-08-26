#pragma once
#include "CoreMinimal.h"
#include "BlobPickedUpDelegate.generated.h"

class AWobbleBlobBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBlobPickedUp, AWobbleBlobBase*, PlantReference);

