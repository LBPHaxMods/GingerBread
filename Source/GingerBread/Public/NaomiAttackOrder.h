#pragma once
#include "CoreMinimal.h"
#include "ENaomiFightState.h"
#include "NaomiAttackOrder.generated.h"

USTRUCT(BlueprintType)
struct FNaomiAttackOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ENaomiFightState> AttackOrder;
    
    GINGERBREAD_API FNaomiAttackOrder();
};

