#pragma once
#include "CoreMinimal.h"
#include "SlapBoltMPResetSignatureDelegate.generated.h"

class ASlapBoltMP;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSlapBoltMPResetSignature, ASlapBoltMP*, SlapBoltMP);

