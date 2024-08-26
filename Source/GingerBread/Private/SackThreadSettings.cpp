#include "SackThreadSettings.h"

FSackThreadSettings::FSackThreadSettings() {
    this->Resolution = 0;
    this->BodyMass = 0.00f;
    this->Thickness = 0.00f;
    this->PositionSolverIterationCountScale = 0;
    this->VelocitySolverIterationCountScale = 0;
    this->LinkLinDrag = 0.00f;
    this->LinkAngDrag = 0.00f;
    this->LinkProjection = 0.00f;
    this->SupportProjection = 0.00f;
    this->SupportPadding = 0.00f;
    this->StressSpringForce = 0.00f;
    this->StressSpringScale = 0.00f;
    this->StressSpringThreshold = 0.00f;
    this->MaximumTensionPadding = 0.00f;
    this->MainJointPadding = 0.00f;
    this->MainJointProjection = 0.00f;
    this->ConnectedDistanceRatio = 0.00f;
    this->UseCylinderCollision = false;
    this->SplitGeneratesThreadAtAttachA = false;
    this->SplitGeneratesThreadAtAttachB = false;
}

