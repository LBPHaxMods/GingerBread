#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "StickProxy.generated.h"

UCLASS(Blueprintable)
class AStickProxy : public APawn {
    GENERATED_BODY()
public:
    AStickProxy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessStickInput(FVector Input);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PassJumpKeyDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PassExitKeyDown();
    
};

