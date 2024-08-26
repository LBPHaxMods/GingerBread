#pragma once
#include "CoreMinimal.h"
#include "ReplAccessibilitySettings.generated.h"

USTRUCT(BlueprintType)
struct FReplAccessibilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 GrabCarryToggleEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FlutterJumpToggleEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RollHoldToggleEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseRightStickToTilt: 1;
    
    GINGERBREAD_API FReplAccessibilitySettings();
};

