#pragma once
#include "CoreMinimal.h"
#include "AIConfigBase.h"
#include "EStompnadoPhase.h"
#include "StompnadoBlackholePhaseParams.h"
#include "StompnadoConfigBlackholeBase.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=StompnadoBlackhole)
class UStompnadoConfigBlackholeBase : public UAIConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStompnadoPhase, FStompnadoBlackholePhaseParams> BlackholePhaseParameters;
    
    UStompnadoConfigBlackholeBase();

};

