#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Styling/SlateColor.h"
#include "Templates/SubclassOf.h"
#include "TextSpeechParserComponent.generated.h"

class UDataTable;
class URichTextFormats;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTextSpeechParserComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SpeechTextDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* IconsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ReminderTextDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URichTextFormats> SourceProperties;
    
    UTextSpeechParserComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetNextSpeechSentence();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetNextReminderSentenceRnd();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetNextReminderSentence();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetIconFromSymbol(const FString& symbol);
    
    UFUNCTION(BlueprintCallable)
    bool GetColourFromSymbol(const FString& symbol, const FSlateColor& defaultColour, FSlateColor& TextColour);
    
};

