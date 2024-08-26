#pragma once
#include "CoreMinimal.h"
#include "TreasureKeeperSplineMarkerBase.h"
#include "TreasureKeeperJumpMarker.generated.h"

class ATreasureKeeperJumpMarker;
class UArcComponent;

UCLASS(Blueprintable)
class ATreasureKeeperJumpMarker : public ATreasureKeeperSplineMarkerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArcComponent* ArcComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATreasureKeeperJumpMarker* TargetJumpMarker;
    
    ATreasureKeeperJumpMarker(const FObjectInitializer& ObjectInitializer);

};

