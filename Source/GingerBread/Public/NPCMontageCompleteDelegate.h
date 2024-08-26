#pragma once
#include "CoreMinimal.h"
#include "NPCMontageCompleteDelegate.generated.h"

class ANPCBase;
class UAnimMontage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FNPCMontageComplete, ANPCBase*, Character, bool, bInterrupted, UAnimMontage*, Montage);

