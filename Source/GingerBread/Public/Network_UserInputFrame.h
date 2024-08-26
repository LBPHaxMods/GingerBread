#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Network_UserInputFrame_NoRightStick.h"
#include "Network_UserInputFrame.generated.h"

USTRUCT(BlueprintType)
struct FNetwork_UserInputFrame : public FNetwork_UserInputFrame_NoRightStick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 RightAnalogue;
    
    GINGERBREAD_API FNetwork_UserInputFrame();
};

