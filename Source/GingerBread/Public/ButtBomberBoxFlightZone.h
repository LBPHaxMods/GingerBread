#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ButtBomberFlightZoneBase.h"
#include "ButtBomberBoxFlightZone.generated.h"

UCLASS(Blueprintable)
class AButtBomberBoxFlightZone : public AButtBomberFlightZoneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InnerBoxExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OuterBoxExtents;
    
    AButtBomberBoxFlightZone(const FObjectInitializer& ObjectInitializer);

};

