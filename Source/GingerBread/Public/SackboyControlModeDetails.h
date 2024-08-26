#pragma once
#include "CoreMinimal.h"
#include "EControlMode.h"
#include "SackboyControlModeDetails.generated.h"

class ASackboy;

USTRUCT(BlueprintType)
struct FSackboyControlModeDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlMode ControlMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASackboy> SackboyInstigator;
    
    GINGERBREAD_API FSackboyControlModeDetails();
};

