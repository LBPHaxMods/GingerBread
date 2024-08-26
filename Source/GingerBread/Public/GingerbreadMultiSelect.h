#pragma once
#include "CoreMinimal.h"
#include "GingerbreadWidgetElement.h"
#include "UIMultiSelectData.h"
#include "UIMultiSelectOnChangedDelegate.h"
#include "GingerbreadMultiSelect.generated.h"

class UImage;
class USizeBox;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadMultiSelect : public UGingerbreadWidgetElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIMultiSelectData> SelectionOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSelectedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoopSelections;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIMultiSelectOnChanged OnSelectionChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SelectionTextField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SelectionImageField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SelectionImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> CachedImageOptions;
    
public:
    UGingerbreadMultiSelect();

    UFUNCTION(BlueprintCallable)
    FUIMultiSelectData SwapToSelection(int32 OptionValue, bool TriggerCallback);
    
    UFUNCTION(BlueprintCallable)
    FUIMultiSelectData SwapToPreviousSelection();
    
    UFUNCTION(BlueprintCallable)
    FUIMultiSelectData SwapToNextSelection();
    
    UFUNCTION(BlueprintCallable)
    FUIMultiSelectData SwapToIndexedSelection(int32 Index, bool TriggerCallback);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOption(int32 OptionValue, bool RemoveAllInstances);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseOptionTextures();
    
    UFUNCTION(BlueprintCallable)
    void PreloadOptionTextures();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAssetsLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIMultiSelectData GetSelectionByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIMultiSelectData GetCurrentSelection() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearOptions();
    
    UFUNCTION(BlueprintCallable)
    void AddOption(FUIMultiSelectData NewOption);
    
};

