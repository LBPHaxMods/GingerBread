#include "VexConfigPhaseModifiersJourney.h"

UVexConfigPhaseModifiersJourney::UVexConfigPhaseModifiersJourney() {
    this->MoveSpeedPerPhase.AddDefaulted(3);
    this->NormalConveyorSpeedPerPhase.AddDefaulted(3);
    this->RageConveyorSpeedPerPhase.AddDefaulted(2);
    this->ThrowsBetweenVortexAttackPerPhase.AddDefaulted(3);
    this->MinThrowsBSR.AddDefaulted(3);
    this->MaxThrowsBSR.AddDefaulted(3);
    this->CanConjureHandPerPhase.AddDefaulted(3);
    this->ThrowDoubleProjectiles.AddDefaulted(3);
    this->MultiplayerAdjustProjectiles.AddDefaulted(3);
    this->TimeBetweenProjectilesPerPhase.AddDefaulted(3);
    this->MpMultiplierTimeBetweenObjectsPerPhase.AddDefaulted(3);
    this->BombTargetXVelocityPerPhase.AddDefaulted(3);
}


