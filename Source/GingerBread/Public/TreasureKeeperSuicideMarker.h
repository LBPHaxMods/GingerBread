#pragma once
#include "CoreMinimal.h"
#include "TreasureKeeperSplineMarkerBase.h"
#include "TreasureKeeperSuicideMarker.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class ATreasureKeeperSuicideMarker : public ATreasureKeeperSplineMarkerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    ATreasureKeeperSuicideMarker(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void AlignWithParentSpline();
    
};

