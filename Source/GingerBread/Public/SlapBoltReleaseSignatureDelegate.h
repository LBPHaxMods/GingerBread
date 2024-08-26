#pragma once
#include "CoreMinimal.h"
#include "SlapBoltReleaseSignatureDelegate.generated.h"

class ASlapBolt;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSlapBoltReleaseSignature, ASlapBolt*, SlapBolt);

