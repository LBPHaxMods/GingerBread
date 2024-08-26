#pragma once
#include "CoreMinimal.h"
#include "FishPlatformStop.generated.h"

class UBoxComponent;

USTRUCT(BlueprintType)
struct FFishPlatformStop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SplinePointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PlatformCollisionComponent;
    
    GINGERBREAD_API FFishPlatformStop();
};

