#pragma once
#include "CoreMinimal.h"
#include "AIConfigBase.h"
#include "StompyConfigLinkSpace.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=StompyLink)
class UStompyConfigLinkSpace : public UAIConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkInitiateDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkBreakDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserRampUpTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserRampDownTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserMinWidthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserMaxWidthMultiplier;
    
    UStompyConfigLinkSpace();

};

