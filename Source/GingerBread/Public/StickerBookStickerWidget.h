#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StickerBookStickerWidget.generated.h"

class UImage;
class UStickerBookDoodleWidget;
class UTexture2D;
class UWidgetAnimation;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UStickerBookStickerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StickerTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StickerParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrokeAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockedStrokeAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StrokeParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStickerBookDoodleWidget*> OwnedDoodles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipStickerUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnlockable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* UnlockAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> UnlockedStickerImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UImage*> LockedStickerImages;
    
public:
    UStickerBookStickerWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowUnlockedAppearance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLockedAppearance();
    
    UFUNCTION(BlueprintCallable)
    void SetUnlocked(bool Unlocked, bool animate);
    
    UFUNCTION(BlueprintCallable)
    void SetStrokeAmount(float newAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetLockedStrokeAmount(float newAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCodeReferences();
    
    UFUNCTION(BlueprintCallable)
    void RefreshStickerMaterials();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStickerAnimatedOn();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnParentPageDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkipsUnlock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsUnlockable() const;
    
};

