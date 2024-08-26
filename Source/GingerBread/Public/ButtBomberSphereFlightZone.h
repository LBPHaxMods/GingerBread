#pragma once
#include "CoreMinimal.h"
#include "ButtBomberFlightZoneBase.h"
#include "ButtBomberSphereFlightZone.generated.h"

UCLASS(Blueprintable)
class AButtBomberSphereFlightZone : public AButtBomberFlightZoneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterSphereRadius;
    
    AButtBomberSphereFlightZone(const FObjectInitializer& ObjectInitializer);

};

