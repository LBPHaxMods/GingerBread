#include "SumoHair.h"

USumoHair::USumoHair() {
    this->BaseMesh = NULL;
    this->NumStrands = 0;
    this->NumParticlesPerStrand = 0;
    this->FollowerRandomSeed = 0;
    this->NumTextures = 1;
    this->Thickness = 0.30f;
    this->Taper = 0.30f;
    this->NumFollowersPerHair = 0;
    this->FollowerHairsMaxRadius = 0.10f;
    this->FollowerHairsTipSeparationFactor = 1.00f;
    this->MaxTessellation = ESumoHairTessellation::NoTessellation;
    this->MaxLodFactor = 1;
    this->Material = NULL;
    this->ParameterTexture = NULL;
    this->WindBuffetingStrength = 1.00f;
    this->WindBuffetingInterval = 1.00f;
}


