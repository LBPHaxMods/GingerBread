#pragma once
#include "CoreMinimal.h"
#include "EManager.generated.h"

UENUM(BlueprintType)
enum class EManager : uint8 {
    GingerbreadEventDispatcher,
    GingerbreadCameraManager,
    CheckpointManager,
    TriggerManager,
    Registrar,
    LevelSettings,
    AppearenceManager,
    LevelStreamingManager,
    NetworkManager,
    CutsceneManager,
    LoadingSyncManager,
    ClothAudioManager,
    PhysicalAudioManager,
    SackboyRespawnManager,
    GameplayAudioManager,
    ObjectTickManager,
    CoordinatorManager,
    CoolSystem,
    LevelManager,
    PickupContainerManager,
    ParryManager,
    LevelResetManager,
    TimedChallenge,
    RemixSpotlightManager,
    RemixDroneManager,
    RemixGauntlet,
    HitPointsManager,
    WaterTableManager,
    SubtitleManager,
    VertexAnimatedMeshManager,
    TutorialTriggerInjector,
    FlameJet2Manager,
    ScoreBubbleManager,
    CameraEffectManager,
    ShatteredOrbManager,
    CrumplerManager,
    BoomblebeeManager,
    PufferFishTickManager,
    MusicStateManager,
    MAX,
};
