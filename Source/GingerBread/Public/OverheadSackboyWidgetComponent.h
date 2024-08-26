#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESackboyActivity.h"
#include "GingerbreadWidgetComponent.h"
#include "OverheadSackboyWidgetComponent.generated.h"

class ASackboy;
class UWidget;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOverheadSackboyWidgetComponent : public UGingerbreadWidgetComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BaseRelativePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESackboyActivity> BlockedActivities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NameTurnOffDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoFlyTurnOffDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* OwningSackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastWorldPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DesiredVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInGameplayScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MenuIconEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NameEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NameEnabledTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PendingNameOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NoFlyEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PendingNoFlyOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoFlyEnabledTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PositionIndicatorEnabled;
    
public:
    UOverheadSackboyWidgetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateVisibility();
    
    UFUNCTION(BlueprintCallable)
    void UpdateTransform();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDesiredVisibility();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldDisplayPositionIndicator();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerNameAndColour();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOverheadWidgetScale(float Scale, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOverheadWidgetName(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOverheadWidgetArrowColour(FLinearColor Colour);
    
    UFUNCTION(BlueprintCallable)
    void ResetPosition();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetOverheadWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetOverheadTargetBorderWidget();
    
    UFUNCTION(BlueprintCallable)
    void EnablePositionIndicator(bool indicatorEnabled);
    
    UFUNCTION(BlueprintCallable)
    void EnableNoFlyIndicator(bool Show);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableNameIfMultiplayer();
    
    UFUNCTION(BlueprintCallable)
    void EnableName();
    
    UFUNCTION(BlueprintCallable)
    void EnableMenuIcon(bool IsInMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoNoFlyOnWidgetAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoNoFlyOffWidgetAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoNameOnWidgetAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoNameOffWidgetAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoMenuOnWidgetAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoMenuOffWidgetAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoIndicatorOnWidgetAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoIndicatorOffWidgetAnimation();
    
};

