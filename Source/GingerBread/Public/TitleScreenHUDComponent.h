#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "TitleScreenHUDComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTitleScreenHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UTitleScreenHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowWaitingForHost();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowButtonPrompt();
    
    UFUNCTION(BlueprintCallable)
    void LoadLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HidePrompt();
    
};

