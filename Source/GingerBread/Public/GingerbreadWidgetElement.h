#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "EUINavigationDirection.h"
#include "Templates/SubclassOf.h"
#include "GingerbreadWidgetElement.generated.h"

class UGingerbreadWidget;
class UGingerbreadWidgetElement;
class UPanelWidget;
class UScrollBox;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadWidgetElement : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadWidgetElement* ParentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadWidget* BoundToWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ChildrenContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGingerbreadWidgetElement> UpNavigationLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGingerbreadWidgetElement> DownNavigationLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGingerbreadWidgetElement> LeftNavigationLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGingerbreadWidgetElement> RightNavigationLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RandomAngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DisabledVisualColour;
    
    UGingerbreadWidgetElement();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDebugValues(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetParentScrollBox(UScrollBox* ScrollBox);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledVisual(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultNavigations(UGingerbreadWidgetElement* UpNavigation, UGingerbreadWidgetElement* DownNavigation, UGingerbreadWidgetElement* LeftNavigation, UGingerbreadWidgetElement* RightNavigation);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultNavigation(EUINavigationDirection NavigationDirection, UGingerbreadWidgetElement* NavigationLink);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVisibilityChanged(bool visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelected(EUINavigationDirection TravelDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusChanged(bool focus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeselected(EUINavigationDirection TravelDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChildrenFocusChanged(UGingerbreadWidgetElement* focusedChildren);
    
    UFUNCTION(BlueprintCallable)
    bool IsMouseInputActive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeDebugWidget();
    
    UFUNCTION(BlueprintCallable)
    UPanelWidget* GetFirstPanelType(TSubclassOf<UPanelWidget> PanelType, TArray<UWidget*>& OutContentStack);
    
    UFUNCTION(BlueprintCallable)
    void ApplyNewRandomAngle(bool ResetIfZero);
    
};

