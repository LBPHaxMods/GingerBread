#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TrafficManager.generated.h"

class ATrafficSpawner;

UCLASS(Blueprintable)
class ATrafficManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATrafficSpawner*> TrafficSpawners;
    
    ATrafficManager(const FObjectInitializer& ObjectInitializer);

};

