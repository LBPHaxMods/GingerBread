#pragma once
#include "CoreMinimal.h"
#include "Network_SackboyAuthNetStatusFrame_Base.h"
#include "Network_UserInputFrame.h"
#include "Network_SackboyAuthNetStatusFrame.generated.h"

USTRUCT(BlueprintType)
struct FNetwork_SackboyAuthNetStatusFrame : public FNetwork_SackboyAuthNetStatusFrame_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetwork_UserInputFrame InputFrame;
    
    GINGERBREAD_API FNetwork_SackboyAuthNetStatusFrame();
};

