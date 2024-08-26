#pragma once
#include "CoreMinimal.h"
#include "AIPatrolBase.h"
#include "AIPatrolPointToPoint.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class AAIPatrolPointToPoint : public AAIPatrolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TeleportToPositionAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AISeparation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartOffset;
    
    AAIPatrolPointToPoint(const FObjectInitializer& ObjectInitializer);

};

