#include "LevelBadgeModel.h"

ALevelBadgeModel::ALevelBadgeModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VisibleMesh = NULL;
    this->bIsRevealed = false;
}

void ALevelBadgeModel::Reveal(bool bReveal, bool bImmediate) {
}


