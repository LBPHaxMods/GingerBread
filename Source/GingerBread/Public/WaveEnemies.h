#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WaveEnemies.generated.h"

class AActor;
class AGingerbreadAICharacter;

USTRUCT(BlueprintType)
struct FWaveEnemies {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AGingerbreadAICharacter>> enemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> Pickups;
    
    GINGERBREAD_API FWaveEnemies();
};

