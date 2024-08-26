#include "RhythmicLaserModule2Unit.h"

FRhythmicLaserModule2Unit::FRhythmicLaserModule2Unit() {
    this->BeamMesh = NULL;
    this->BurnMesh = NULL;
    this->EmitterMesh = NULL;
    this->WiresMesh = NULL;
    this->BurnDecal = NULL;
    this->DropDecal = NULL;
    this->LaserCollision = NULL;
    this->LaserGapCollision = NULL;
    this->LaserInteraction = NULL;
    this->LaserGapInteraction = NULL;
    this->LaserBurnParticles = NULL;
    this->LaserYLocation = 0.00f;
}

