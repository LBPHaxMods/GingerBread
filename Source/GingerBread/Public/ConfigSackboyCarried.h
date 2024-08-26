#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ConfigSackboyCarried.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=SackboyCarried)
class UConfigSackboyCarried : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarriedStruggleAnimationTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CarriedStuggleBreakCount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarriedStuggleInputTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawDebug;
    
    UConfigSackboyCarried();

};

