#include "TextSpeechParserComponent.h"

UTextSpeechParserComponent::UTextSpeechParserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpeechTextDataTable = NULL;
    this->IconsDataTable = NULL;
    this->ReminderTextDataTable = NULL;
    this->SourceProperties = NULL;
}

TArray<FString> UTextSpeechParserComponent::GetNextSpeechSentence() {
    return TArray<FString>();
}

TArray<FString> UTextSpeechParserComponent::GetNextReminderSentenceRnd() {
    return TArray<FString>();
}

TArray<FString> UTextSpeechParserComponent::GetNextReminderSentence() {
    return TArray<FString>();
}

UTexture2D* UTextSpeechParserComponent::GetIconFromSymbol(const FString& symbol) {
    return NULL;
}

bool UTextSpeechParserComponent::GetColourFromSymbol(const FString& symbol, const FSlateColor& defaultColour, FSlateColor& TextColour) {
    return false;
}


