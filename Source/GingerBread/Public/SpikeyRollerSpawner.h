#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AdvancedEmitter.h"
#include "Templates/SubclassOf.h"
#include "SpikeyRollerSpawner.generated.h"

class APhysicsSpikeyRoller;

UCLASS(Blueprintable)
class ASpikeyRollerSpawner : public AAdvancedEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanRollBothWays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScaleUpOnSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartVectorScale;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APhysicsSpikeyRoller> SpawnClass;
    
public:
    ASpikeyRollerSpawner(const FObjectInitializer& ObjectInitializer);

};

