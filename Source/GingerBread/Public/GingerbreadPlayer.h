#pragma once
#include "CoreMinimal.h"
#include "GingerbreadPlayerId.h"
#include "GingerbreadPlayer.generated.h"

class AGingerbreadPlayerController;
class AGingerbreadPlayerState;
class ASackboy;
class UGingerbreadLocalPlayer;

USTRUCT(BlueprintType)
struct FGingerbreadPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGingerbreadPlayerId PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGingerbreadLocalPlayer* LocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* Sackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGingerbreadPlayerState* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VoiceChatRestricted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGingerbreadPlayerId PrimaryPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGingerbreadPlayerId> SecondaryPlayerIds;
    
    GINGERBREAD_API FGingerbreadPlayer();
};

