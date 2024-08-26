#include "ArtMove.h"

FArtMove::FArtMove() {
    this->TransformOrder = EArtMoveTransformOrder::Matrix_Spline;
    this->SimpleTransform = false;
    this->TransformLerpMode = EMusicArtMoverLerpMode::Linear;
    this->Spline = false;
    this->SplineLerpMode = EMusicArtMoverLerpMode::Linear;
    this->ConstantRotationMultiplier = 0.00f;
    this->CurveLocation = NULL;
    this->RemapLocationCurve = false;
    this->CurveRotation = NULL;
    this->RemapRotationCurve = false;
    this->CurveScale = NULL;
    this->RemapScaleCurve = false;
    this->FixedNumSamples = 0;
    this->SamplesPerCm = 0.00f;
    this->CachedTransformsID = 0;
    this->CachedLength = 0.00f;
}

