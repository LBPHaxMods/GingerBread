#pragma once
#include "CoreMinimal.h"
#include "PinChallengeData.h"
#include "PinData.h"
#include "CPE_PinsLoadSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCPE_PinsLoadSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPinData> Pins;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<uint32> NewPins;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 FavouritePins[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PowerPinTutorialShown: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPinChallengeData ChallengeData;
    
    GINGERBREAD_API FCPE_PinsLoadSaveData();
};

