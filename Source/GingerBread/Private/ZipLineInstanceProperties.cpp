#include "ZipLineInstanceProperties.h"

FZipLineInstanceProperties::FZipLineInstanceProperties() {
    this->UseWorldOverride = false;
    this->WorldOverride = EWorldLocation::Amazon;
    this->AutoUpdate = false;
    this->UseNewProceduralWireMesh = false;
    this->ShowWireStartMesh = false;
    this->ShowWireEndMesh = false;
    this->IncludeStartMesh = false;
    this->IncludeEndMesh = false;
    this->LineRadius = 0.00f;
    this->DebugShowSwing = false;
    this->DebugSwingSpacing = 0.00f;
    this->SplineCamera = NULL;
    this->TravelTime = 0.00f;
    this->UseDismount = false;
    this->DismountSpacing = 0.00f;
    this->MovementCurve = NULL;
    this->SafeZone = 0.00f;
    this->DismountZone = 0.00f;
    this->EndSplinePoint = 0;
}

