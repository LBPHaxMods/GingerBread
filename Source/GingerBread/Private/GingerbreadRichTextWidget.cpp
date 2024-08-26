#include "GingerbreadRichTextWidget.h"
#include "Templates/SubclassOf.h"

UGingerbreadRichTextWidget::UGingerbreadRichTextWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MaxWords = 20;
    this->MaxIcons = 4;
    this->IconTag = TEXT("Icon");
    this->FontColourTag = TEXT("Colour");
    this->ActionTag = TEXT("Action");
    this->GrabTag = TEXT("Grab");
    this->RollTag = TEXT("Roll");
    this->TextTemplateClass = NULL;
    this->IconTemplateClass = NULL;
    this->ActionIconTemplateClass = NULL;
    this->SourceProperties = NULL;
}

void UGingerbreadRichTextWidget::ShowNextWord() {
}

void UGingerbreadRichTextWidget::ShowAllWords() {
}

void UGingerbreadRichTextWidget::SetRichText(FText UnformattedText, bool AutoShowAllWords) {
}

void UGingerbreadRichTextWidget::SetPropertiesSource(TSubclassOf<URichTextFormats> PropertiesSource) {
}


void UGingerbreadRichTextWidget::SetFont(UFont* Font, int32 Size) {
}



void UGingerbreadRichTextWidget::OnCultureChange() {
}

bool UGingerbreadRichTextWidget::HasProperty(const FName PropertyName) const {
    return false;
}

FName UGingerbreadRichTextWidget::GetPropertyAsName(const FName PropertyName) const {
    return NAME_None;
}

FString UGingerbreadRichTextWidget::GetProperty(const FName PropertyName) const {
    return TEXT("");
}

void UGingerbreadRichTextWidget::GetAllPropertiesValues(const FName propertyTag, TArray<FString>& Properties) {
}

UTexture2D* UGingerbreadRichTextWidget::GetActionTexture(const FString& actionID) {
    return NULL;
}

void UGingerbreadRichTextWidget::ClearText() {
}



