#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TreasureKeeperSplineMarkerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATreasureKeeperSplineMarkerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceAlongSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RelevantWhileMovingForwards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RelevantWhileMovingBackwards;
    
public:
    ATreasureKeeperSplineMarkerBase(const FObjectInitializer& ObjectInitializer);

};

