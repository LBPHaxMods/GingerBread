#pragma once
#include "CoreMinimal.h"
#include "SlapBoltSlappedSignatureDelegate.generated.h"

class ASlapBolt;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSlapBoltSlappedSignature, ASlapBolt*, SlapBolt);

