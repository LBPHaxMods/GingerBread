#include "LevelInfoHUDComponent.h"

ULevelInfoHUDComponent::ULevelInfoHUDComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelPreviousHighScore = 0;
    this->LevelHighScore = 0;
    this->HiScorePhoto = NULL;
    this->Completed = false;
    this->FinishedMultiplayer = false;
    this->AllCollected = false;
    this->Aced = false;
    this->MinimimPlayerCount = 1;
    this->LevelBadgeType = ELevelBadgeType::Main;
    this->IsOpened = false;
    this->UpdateWorldToScreenPosition = true;
    this->BlockOpen = true;
}

void ULevelInfoHUDComponent::SetWidgetComponentSpace(UWidgetComponent* WidgetComp, EWidgetSpace SpaceType) {
}

void ULevelInfoHUDComponent::OpenLevelInfo_Implementation(const FVector& WorldPosition, AActor* InWorldPane) {
}

EWidgetSpace ULevelInfoHUDComponent::GetWidgetComponentSpace(UWidgetComponent* WidgetComp) {
    return EWidgetSpace::World;
}

void ULevelInfoHUDComponent::CloseLevelInfo_Implementation(AActor* InWorldPane) {
}

void ULevelInfoHUDComponent::BackupLevelData() {
}


