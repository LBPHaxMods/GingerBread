#pragma once
#include "CoreMinimal.h"
#include "SniperConfigShootBase.h"
#include "SniperConfigShootUndersea.generated.h"

UCLASS(Blueprintable, Config=Engine)
class USniperConfigShootUndersea : public USniperConfigShootBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStuckAngle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StuckAngleRandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StuckAngleRotationSpeed;
    
    USniperConfigShootUndersea();

};

