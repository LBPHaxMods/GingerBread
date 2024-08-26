#pragma once
#include "CoreMinimal.h"
#include "EVexEncounterBehaviour.generated.h"

UENUM(BlueprintType)
enum class EVexEncounterBehaviour : uint8 {
    Invalid,
    IdleMoving,
    ThrowBomb,
    ConjureHand,
    ThrowSpikeyRoller,
    Jump,
    Vortex,
    Rage,
    FightPhaseTransition,
    FlameSequence,
    SpikeyRollerSequence,
    ChangeConveyorHeights,
    NumStates,
};

