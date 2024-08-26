#pragma once
#include "CoreMinimal.h"
#include "SlapBoltMPReleaseSignatureDelegate.generated.h"

class ASlapBoltMP;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSlapBoltMPReleaseSignature, ASlapBoltMP*, SlapBoltMP);

