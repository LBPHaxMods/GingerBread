#pragma once
#include "CoreMinimal.h"
#include "MrCreosoteGameDataWavesTransfer.generated.h"

class ATriggerBox;

USTRUCT(BlueprintType)
struct FMrCreosoteGameDataWavesTransfer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATriggerBox*> SpawnBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FoodAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoodCountdownTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenFood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeTillNextWave;
    
    GINGERBREAD_API FMrCreosoteGameDataWavesTransfer();
};

