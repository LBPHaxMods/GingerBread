#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EFlowDirection -FallbackName=EFlowDirection
#include "Styling/SlateColor.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "GingerbreadRichTextWidget.generated.h"

class UFont;
class UGingerbreadActionIconWidget;
class UGingerbreadRichTextWidget_Icon;
class UGingerbreadRichTextWidget_Text;
class UGingerbreadWidgetElement;
class URichTextFormats;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadRichTextWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxWords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FontColourTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GrabTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RollTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGingerbreadRichTextWidget_Text> TextTemplateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGingerbreadRichTextWidget_Icon> IconTemplateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGingerbreadActionIconWidget> ActionIconTemplateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URichTextFormats> SourceProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor DefaultTextColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGingerbreadRichTextWidget_Text*> TextPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGingerbreadRichTextWidget_Icon*> IconPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGingerbreadActionIconWidget*> ActionIconPool;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UTexture2D*> ActionIcons;
    
public:
    UGingerbreadRichTextWidget();

    UFUNCTION(BlueprintCallable)
    void ShowNextWord();
    
    UFUNCTION(BlueprintCallable)
    void ShowAllWords();
    
    UFUNCTION(BlueprintCallable)
    void SetRichText(FText UnformattedText, bool AutoShowAllWords);
    
    UFUNCTION(BlueprintCallable)
    void SetPropertiesSource(TSubclassOf<URichTextFormats> PropertiesSource);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNewLineAfterWidget(UGingerbreadWidgetElement* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetFont(UFont* Font, int32 Size);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveWidgetsFromTextBlock();
    
    UFUNCTION(BlueprintCallable)
    void OnCultureChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProperty(const FName PropertyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPropertyAsName(const FName PropertyName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetProperty(const FName PropertyName) const;
    
    UFUNCTION(BlueprintCallable)
    void GetAllPropertiesValues(const FName propertyTag, TArray<FString>& Properties);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetActionTexture(const FString& actionID);
    
    UFUNCTION(BlueprintCallable)
    void ClearText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddWidgetToTextBlock(UGingerbreadWidgetElement* WidgetToAdd);
    
};

