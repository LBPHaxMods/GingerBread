#pragma once
#include "CoreMinimal.h"
#include "Network_SackboyAuthNetStatusFrame_Base.h"
#include "Network_UserInputFrame_NoRightStick.h"
#include "Network_SackboyAuthNetStatusFrame_NoRightStick.generated.h"

USTRUCT(BlueprintType)
struct FNetwork_SackboyAuthNetStatusFrame_NoRightStick : public FNetwork_SackboyAuthNetStatusFrame_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetwork_UserInputFrame_NoRightStick InputFrame;
    
    GINGERBREAD_API FNetwork_SackboyAuthNetStatusFrame_NoRightStick();
};

