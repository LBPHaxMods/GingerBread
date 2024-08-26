#pragma once
#include "CoreMinimal.h"
#include "ButtBomberFlightZoneBase.h"
#include "ButtBomberCapsuleFlightZone.generated.h"

UCLASS(Blueprintable)
class AButtBomberCapsuleFlightZone : public AButtBomberFlightZoneBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerCapsuleHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterCapsuleHeight;
    
    AButtBomberCapsuleFlightZone(const FObjectInitializer& ObjectInitializer);

};

