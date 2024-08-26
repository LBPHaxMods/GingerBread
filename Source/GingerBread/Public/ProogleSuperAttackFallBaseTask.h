#pragma once
#include "CoreMinimal.h"
#include "GingerbreadBTTaskNode.h"
#include "ProogleSuperAttackFallBaseTask.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class UProogleSuperAttackFallBaseTask : public UGingerbreadBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* EmitterTemplate;
    
public:
    UProogleSuperAttackFallBaseTask();

};

