#include "WaterObjectProcSpline.h"
#include "Components/SplineComponent.h"

AWaterObjectProcSpline::AWaterObjectProcSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->WidthSegments = 40.00f;
    this->Width = 500.00f;
    this->LengthSegmentSize = 15.00f;
    this->Spline->SetupAttachment(RootComponent);
}


