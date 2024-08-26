#pragma once
#include "CoreMinimal.h"
#include "EPlayerJoinDirection.h"
#include "EPlayerSlot.h"
#include "ReplAccessibilitySettings.h"
#include "PlayerJoinPacket.generated.h"

USTRUCT(BlueprintType)
struct FPlayerJoinPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerSlot Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplAccessibilitySettings Accessibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNetworkGameHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerReadyForLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerJoinedGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerJoinDirection LastSeenJoinDir;
    
    GINGERBREAD_API FPlayerJoinPacket();
};

