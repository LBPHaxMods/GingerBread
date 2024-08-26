#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "FloatyBubbleEventReceiver.generated.h"

class AFloatyBubble;

UINTERFACE(Blueprintable, MinimalAPI)
class UFloatyBubbleEventReceiver : public UInterface {
    GENERATED_BODY()
};

class IFloatyBubbleEventReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExitBubble(AFloatyBubble* bubble);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnterBubble(AFloatyBubble* bubble, bool& overrideAnchorPoint, FVector& anchorPoint);
    
};

