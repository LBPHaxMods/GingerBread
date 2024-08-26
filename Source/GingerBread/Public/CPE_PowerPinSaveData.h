#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPowerPin.h"
#include "EPowerPinState.h"
#include "CPE_PowerPinSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCPE_PowerPinSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPowerPin, EPowerPinState> PinStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPowerPin, FDateTime> PinDates;
    
    GINGERBREAD_API FCPE_PowerPinSaveData();
};

