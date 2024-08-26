#pragma once
#include "CoreMinimal.h"
#include "AIConfigBase.h"
#include "StompysteinConfigLinkBase.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=StompysteinLink)
class UStompysteinConfigLinkBase : public UAIConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkInitiateDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinkBreakDistance;
    
    UStompysteinConfigLinkBase();

};

