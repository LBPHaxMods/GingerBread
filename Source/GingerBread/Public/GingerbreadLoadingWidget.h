#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GingerbreadWidget.h"
#include "LoadingScreenState.h"
#include "ToolTipDataTableRow.h"
#include "GingerbreadLoadingWidget.generated.h"

class UDataTable;
class UGingerBreadGameInstance;
class UGingerBreadLoadingScreenSettings;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadLoadingWidget : public UGingerbreadWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LoadingStateResetAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LoadingStateLoopedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoToolTipSelection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ControlScheme;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerBreadGameInstance* m_pGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerBreadLoadingScreenSettings* m_pSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pTable;
    
public:
    UGingerbreadLoadingWidget();

    UFUNCTION(BlueprintCallable)
    void SetupTooltipSelection();
    
    UFUNCTION(BlueprintCallable)
    void SetupControlScheme(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLoadingTooltip(const FToolTipDataTableRow& Tooltip);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLoadingScreenState(const FLoadingScreenState& NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionToSlate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfTips() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyOrGenerateTooltip(bool ShouldGenerate);
    
};

