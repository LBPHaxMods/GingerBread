#pragma once
#include "CoreMinimal.h"
#include "AIAttackChanceConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FAIAttackChanceConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 increment;
    
    GINGERBREAD_API FAIAttackChanceConfiguration();
};

