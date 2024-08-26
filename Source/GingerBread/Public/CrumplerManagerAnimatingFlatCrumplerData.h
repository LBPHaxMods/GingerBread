#pragma once
#include "CoreMinimal.h"
#include "CrumplerManagerAnimatingFlatCrumplerData.generated.h"

class ACrumpler;

USTRUCT(BlueprintType)
struct FCrumplerManagerAnimatingFlatCrumplerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACrumpler> Crumpler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentSequenceTimer;
    
    GINGERBREAD_API FCrumplerManagerAnimatingFlatCrumplerData();
};

