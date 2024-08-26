#pragma once
#include "CoreMinimal.h"
#include "AdvancedEmitter.h"
#include "EYetiType.h"
#include "RollingYetiSpawner.generated.h"

UCLASS(Blueprintable)
class ARollingYetiSpawner : public AAdvancedEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYetiType YetiType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAlwaysGrounded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float YetiSpeed;
    
    ARollingYetiSpawner(const FObjectInitializer& ObjectInitializer);

};

