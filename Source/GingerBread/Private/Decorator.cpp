#include "Decorator.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "TriggerActorComponent.h"

ADecorator::ADecorator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->lengthSpline = CreateDefaultSubobject<USplineComponent>(TEXT("lengthSpline"));
    this->widthSpline = CreateDefaultSubobject<USplineComponent>(TEXT("widthSpline"));
    this->Type = EDecoratorType::LengthSplineOnly;
    this->Width = 20.00f;
    this->Raycast = true;
    this->ReverseRaycastDirection = false;
    this->UseComplexRaycastCollision = true;
    this->AdheresToSplineCurve = false;
    this->CastDepth = 10.00f;
    this->ItemSpacingToFitRow = true;
    this->ItemSpacing = 5.00f;
    this->RowSpacing = 5.00f;
    this->SelectItemByRow = true;
    this->ItemSelectionMethod = EDecoItemSelectionMethod::ListLoop;
    this->lengthSpline->SetupAttachment(RootComponent);
    this->widthSpline->SetupAttachment(RootComponent);
}


