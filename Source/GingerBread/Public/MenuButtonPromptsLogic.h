#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EButtonNames.h"
#include "UIMenuPromptsCollection.h"
#include "MenuButtonPromptsLogic.generated.h"

class UAkAudioEvent;
class UUserWidget;

UCLASS(Blueprintable)
class UMenuButtonPromptsLogic : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* RootWidget;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<FName, TWeakObjectPtr<UUserWidget>> ButtonMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetNames[16];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetName_ButtonText;
    
    UMenuButtonPromptsLogic();

    UFUNCTION(BlueprintCallable)
    void ShowButton(EButtonNames buttonName, FText DisplayText, UAkAudioEvent* ButtonPressSFX, float HoldTime, UAkAudioEvent* hapticEvent, UAkAudioEvent* gamepadAudioEvent, bool MouseInput);
    
    UFUNCTION(BlueprintCallable)
    void SetPromptCollection(const FUIMenuPromptsCollection& Collection);
    
    UFUNCTION(BlueprintCallable)
    void HideAllButtons();
    
    UFUNCTION(BlueprintCallable)
    void CacheWidgetsAndAnimations(UUserWidget* Root);
    
};

