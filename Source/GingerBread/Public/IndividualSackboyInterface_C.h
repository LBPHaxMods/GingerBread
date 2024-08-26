#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "ESackboyEmotionalState.h"
#include "EUINavigationDirection.h"
#include "SackboyEmote.h"
#include "Templates/SubclassOf.h"
#include "UIMenuPromptsCollection.h"
#include "UI_EmotionalStateTableRow_C.h"
#include "IndividualSackboyInterface_C.generated.h"

class AActor;
class ASackboy;
class UBaseButtonPrompt;
class UGingerbreadWidget;
class UScrollBox;
class UUserWidget;
class UWidget;

UINTERFACE(Blueprintable)
class UIndividualSackboyInterface_C : public UInterface {
    GENERATED_BODY()
};

class IIndividualSackboyInterface_C : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WardrobePressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateTooltip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateScrollBar(bool InAnimate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopAllReady();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StockPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWardrobeVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHomeVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetEmotionalStateForSackboy(FName EmoteState, EUINavigationDirection DpadDir);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetEmoteForSackboy(FName EmoteID, EUINavigationDirection DpadDir);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCurrentScrollBox(UScrollBox* ScrollBox);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetButtonPrompts(const FUIMenuPromptsCollection& Prompts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActiveWidget(UWidget* NewActiveWidget, EUINavigationDirection TravelDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReadyPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenMaxOutfits();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenEmoteSelection();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenColourMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnResizeGridToIdeal(UUserWidget* ResizeScrollBox, FVector2D NewSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreviousPage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPrevious();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNextPage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNext();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttemptSaveCustom();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttemptItemPurchase();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttemptCustomDelete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMultiplayerMode();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleAllReady();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UBaseButtonPrompt* GetTriangleButtonPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ASackboy* GetOwningSackboy();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetMyCostumeShopSackboy(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UUserWidget* GetItemToolTip(TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UGingerbreadWidget* GetGingerbreadWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UBaseButtonPrompt* GetCrossButtonPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ESackboyEmotionalState GetBoundEmotionalStateForSackboy(EUINavigationDirection DpadDir);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSackboyEmote GetBoundEmoteForSackboy(EUINavigationDirection DpadDir);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FUI_EmotionalStateTableRow_C FindEmotionalStateData(FName emoteStateID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseSubMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseCustomiseMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AutoDisplayTabCategories(UUserWidget* ScrollBox);
    
};

