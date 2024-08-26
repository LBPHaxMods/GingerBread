#include "GingerbreadWidgetList_Item.h"

UGingerbreadWidgetList_Item::UGingerbreadWidgetList_Item() {
    this->OwnerListWidget = NULL;
    this->ListIndex = -1;
    this->mAnimations[0] = NULL;
    this->mAnimations[1] = NULL;
    this->mAnimations[2] = NULL;
    this->mAnimations[3] = NULL;
    this->mAnimations[4] = NULL;
    this->mAnimations[5] = NULL;
    this->mAnimations[6] = NULL;
}

void UGingerbreadWidgetList_Item::SetAnimations(UWidgetAnimation* Highlight, UWidgetAnimation* Unhighlight, UWidgetAnimation* Select, UWidgetAnimation* Deselect, UWidgetAnimation* LoopHighlight, UWidgetAnimation* GroupShiftHighlight, UWidgetAnimation* GroupShiftUnhighlight) {
}


