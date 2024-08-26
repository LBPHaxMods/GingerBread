#pragma once
#include "CoreMinimal.h"
#include "GingerbreadScreen.h"
#include "GameplayHUD.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGameplayHUD : public UGingerbreadScreen {
    GENERATED_BODY()
public:
    UGameplayHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRenderInMainPass(bool State);
    
};

