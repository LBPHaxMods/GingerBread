#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "RestartHUDComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URestartHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    URestartHUDComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowRestartHUD(bool Show);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowContinueHUD(bool Show);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLevelName() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableRestartHUD(bool Enable, bool Retry);
    
};

