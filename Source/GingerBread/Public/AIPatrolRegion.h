#pragma once
#include "CoreMinimal.h"
#include "AIPatrolBase.h"
#include "AIPatrolRegion.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class AAIPatrolRegion : public AAIPatrolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinNewPatrolPointDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxNewPatrolPointDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PatrolRegionArea;
    
    AAIPatrolRegion(const FObjectInitializer& ObjectInitializer);

};

