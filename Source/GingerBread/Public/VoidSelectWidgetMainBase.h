#pragma once
#include "CoreMinimal.h"
#include "EVoidSelectESportState.h"
#include "EVoidSelectTrialsType.h"
#include "GingerbreadWidget.h"
#include "VoidSelectWidgetMainBase.generated.h"

class UBaseButtonPrompt;
class UPSCompeteScreenBase;
class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UVoidSelectWidgetMainBase : public UGingerbreadWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TabbedHeaders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TabHeaderTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseButtonPrompt* TabBtnLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseButtonPrompt* TabBtnRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPSCompeteScreenBase* PlaystationCompeteScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoidSelectESportState ESportState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoidSelectTrialsType SelectedTrialsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVoidSelectTrialsType, FText> SelectedTrialsTexts;
    
    UVoidSelectWidgetMainBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayPlaystationCompetePrompt() const;
    
    UFUNCTION(BlueprintCallable)
    void SetIsVoidIntroPlaying(bool bIsPlaying);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetShowPlaystationCompeteScreen_BP(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetSelectedTrialsType_BP(EVoidSelectTrialsType TrialsType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetESportState_BP(EVoidSelectESportState State);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVoidIntroPlaying() const;
    
};

