#pragma once
#include "CoreMinimal.h"
#include "PlayerJoinLevelStatus.generated.h"

UENUM(BlueprintType)
enum class PlayerJoinLevelStatus : uint8 {
    NotJoined,
    NotJoined_LocalCostumeLoading,
    NotJoined_CostumeSetup,
    Joining_Begin,
    Joining_CheckAllowed,
    Joining_CheckingAllowed,
    Joining_JoinSession,
    Joining_JoiningSession,
    Joining_LoadSaveData,
    Joining_LoadingSaveData,
    Joining_ReconcileLoadError_Corrupt,
    Joining_ReconcileLoadError_Space,
    Joining_ReconcileLoadError_Force,
    Joining_AwaitState,
    Joining_RequestSlot,
    Joining_AwaitingSlot,
    Joining_AwaitingCostumeSync,
    Joining_AwaitingResumeJoining,
    Joining_Ready,
    Joined,
    Leaving_Begin,
    Leaving_RequestRelease,
    Leaving_AwatingRelease,
    Leaving_UnloadSaveData,
    Leaving_LeaveSession,
    Leaving_LeavingSession,
    Leaving_DestroyPlayer,
    None,
};

