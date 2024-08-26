#pragma once
#include "CoreMinimal.h"
#include "AttackChanceConfig.generated.h"

USTRUCT(BlueprintType)
struct FAttackChanceConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 increment;
    
    GINGERBREAD_API FAttackChanceConfig();
};

