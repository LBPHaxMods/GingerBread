#include "DecoratorSetupData.h"

FDecoratorSetupData::FDecoratorSetupData() {
    this->lengthSpline = NULL;
    this->widthSpline = NULL;
    this->decoType = EDecoratorType::LengthSplineOnly;
    this->singleWidth = 0.00f;
    this->ItemSpacing = 0.00f;
    this->RowSpacing = 0.00f;
    this->raycastDepth = 0.00f;
    this->Raycast = false;
    this->ReverseRaycastDirection = false;
    this->UseComplexRaycastCollision = false;
    this->SelectItemByRow = false;
    this->ItemSelectionMethod = EDecoItemSelectionMethod::ListLoop;
}

