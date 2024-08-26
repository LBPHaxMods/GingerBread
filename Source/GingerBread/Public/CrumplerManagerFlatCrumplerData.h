#pragma once
#include "CoreMinimal.h"
#include "CrumplerManagerFlatCrumplerData.generated.h"

class ACrumpler;

USTRUCT(BlueprintType)
struct FCrumplerManagerFlatCrumplerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACrumpler> Crumpler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextValidPlayTime;
    
    GINGERBREAD_API FCrumplerManagerFlatCrumplerData();
};

