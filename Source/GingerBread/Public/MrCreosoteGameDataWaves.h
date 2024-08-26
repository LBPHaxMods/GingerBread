#pragma once
#include "CoreMinimal.h"
#include "MrCreosoteGameDataWaves.generated.h"

class ATriggerBox;

USTRUCT(BlueprintType)
struct FMrCreosoteGameDataWaves {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ATriggerBox>> SpawnBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FoodAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoodCountdownTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenFood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeTillNextWave;
    
    GINGERBREAD_API FMrCreosoteGameDataWaves();
};

