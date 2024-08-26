#pragma once
#include "CoreMinimal.h"
#include "StompyConfigSpinBase.h"
#include "StompyConfigSpinSpace.generated.h"

UCLASS(Blueprintable, Config=Engine)
class UStompyConfigSpinSpace : public UStompyConfigSpinBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinStartHeadDamageAuraTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinStopHeadDamageAuraTime;
    
    UStompyConfigSpinSpace();

};

