#pragma once
#include "CoreMinimal.h"
#include "FloatyBubbleFireInfo.h"
#include "SackboyExitBubbleInfo.generated.h"

class AFloatyBubble;

USTRUCT(BlueprintType)
struct FSackboyExitBubbleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFloatyBubble> bubble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatyBubbleFireInfo FireInfo;
    
    GINGERBREAD_API FSackboyExitBubbleInfo();
};

