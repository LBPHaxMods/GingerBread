#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "ERangedAttackType.h"
#include "BTTask_CereboomProjectileAttack.generated.h"

class AActor;

UCLASS(Blueprintable)
class UBTTask_CereboomProjectileAttack : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERangedAttackType CurrentAttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UBTTask_CereboomProjectileAttack();

    UFUNCTION(BlueprintCallable)
    static void SetDebugStateChangeText(AActor* OwningActor, const FString& Text);
    
};

