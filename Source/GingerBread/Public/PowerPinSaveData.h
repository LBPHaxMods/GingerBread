#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPowerPin.h"
#include "EPowerPinState.h"
#include "PowerPinSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPowerPinSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPowerPin, EPowerPinState> PinStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPowerPin, FDateTime> PinDates;
    
    GINGERBREAD_API FPowerPinSaveData();
};

