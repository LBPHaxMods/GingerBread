#include "CreationRecipe.h"

UCreationRecipe::UCreationRecipe() {
    this->RecipePriority = 0;
    this->RecipeName = FText::FromString(TEXT("Recipe Name"));
    this->HandlingConfig = NULL;
}

bool UCreationRecipe::IsRequiredAttachment(const FDataTableRowHandle& CreationTypeA, const FDataTableRowHandle& CreationTypeB) const {
    return false;
}

bool UCreationRecipe::IsAttachmentRequired(const FName CreationTypeA, const FName CreationTypeB) const {
    return false;
}


