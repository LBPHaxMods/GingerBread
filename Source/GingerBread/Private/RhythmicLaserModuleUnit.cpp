#include "RhythmicLaserModuleUnit.h"

FRhythmicLaserModuleUnit::FRhythmicLaserModuleUnit() {
    this->ModuleMesh = NULL;
    this->ApertureMesh = NULL;
    this->RingMesh = NULL;
    this->BeamMesh = NULL;
    this->BurnMesh = NULL;
    this->BurnDecal = NULL;
    this->DropDecal = NULL;
    this->LaserCollision = NULL;
    this->LaserGapCollision = NULL;
    this->LaserBurnParticles = NULL;
    this->LaserYLocation = 0.00f;
}

