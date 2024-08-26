#include "LaserModule2Unit.h"

FLaserModule2Unit::FLaserModule2Unit() {
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
    this->LaserEmitParticles = NULL;
    this->LaserCapParticles = NULL;
    this->LaserSourceParticles = NULL;
    this->AkLaser = NULL;
    this->LaserYLocation = 0.00f;
}

