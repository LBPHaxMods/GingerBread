#pragma once
#include "CoreMinimal.h"
#include "GingerbreadBTTaskNode.h"
#include "ProogleSuperAttackTeleportBaseTask.generated.h"

UCLASS(Blueprintable)
class UProogleSuperAttackTeleportBaseTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timeout;
    
    UProogleSuperAttackTeleportBaseTask();

};

