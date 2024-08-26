#pragma once
#include "CoreMinimal.h"
#include "EVexFinalVoiceLineTriggerType.generated.h"

UENUM(BlueprintType)
enum class EVexFinalVoiceLineTriggerType : uint8 {
    Invalid,
    PrefightIntro,
    FightIntro,
    PlayerRespawns,
    FinalLife,
    Teleporting,
    ItemDrop,
    PlayerDeath,
    TransformationAnnounce,
    Trickster,
    Trick_Lifesteal,
    Trick_LocationSwap,
    Trick_RammerTransform,
    Trick_Crumpler,
    OutOfStunRetreat_Generic,
    OutOfStunRetreat_Transform,
    HealthDepleated,
    IncidentalPlatforming,
    OnWallBreak,
    PostWallBreak,
    OnTileBreak,
    PostTileBreak,
    HitReaction_Long,
    HitReaction_Critical,
    HitReaction_Generic,
    HitReaction_Stunned,
    GenericTaunt,
    Max,
};

