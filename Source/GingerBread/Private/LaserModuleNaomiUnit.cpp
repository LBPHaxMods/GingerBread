#include "LaserModuleNaomiUnit.h"

FLaserModuleNaomiUnit::FLaserModuleNaomiUnit() {
    this->BeamMesh = NULL;
    this->BurnMesh = NULL;
    this->EmitterMesh = NULL;
    this->WiresMesh = NULL;
    this->BurnDecal = NULL;
    this->DropDecal = NULL;
    this->LaserDetector = NULL;
    this->LaserInteract = NULL;
    this->LaserDamager = NULL;
    this->LaserGapDamager = NULL;
    this->LaserDamageInteract = NULL;
    this->LaserGapDamageInteract = NULL;
    this->LaserBurnParticles = NULL;
    this->LaserYLocation = 0.00f;
}

