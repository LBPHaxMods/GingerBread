#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseButtonPrompt.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class UBaseButtonPrompt : public UUserWidget {
    GENERATED_BODY()
public:
    UBaseButtonPrompt();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasRecentlyRendered() const;
    
    UFUNCTION(BlueprintCallable)
    void SetMouseInput(bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPressSFX(UAkAudioEvent* ButtonPressSFX);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPressHapticEvent(UAkAudioEvent* ButtonPressHaptic);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPressGamepadAudioEvent(UAkAudioEvent* ButtonGamepadAudio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetHoldTime(float NewHoldTime);
    
    UFUNCTION(BlueprintCallable)
    bool GetMouseInput();
    
};

