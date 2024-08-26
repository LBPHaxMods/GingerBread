#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "ClientQuitHudComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UClientQuitHudComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UClientQuitHudComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void QuitNetworkGame();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenClientQuitScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNetworkSessionQuit(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsScreenOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseClientQuitScreen(bool instant);
    
};

