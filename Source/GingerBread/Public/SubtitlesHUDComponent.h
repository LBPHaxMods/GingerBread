#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "Templates/SubclassOf.h"
#include "SubtitlesHUDComponent.generated.h"

class URichTextFormats;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USubtitlesHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    USubtitlesHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSubtitles(const FText& subsText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSpeakerName(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubtitleVisibility(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSpeakerName(const FText& SpeakerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRichTextFormat(TSubclassOf<URichTextFormats> PropertiesSource);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSubtitles();
    
};

