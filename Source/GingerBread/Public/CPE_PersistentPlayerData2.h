#pragma once
#include "CoreMinimal.h"
#include "BoundEmoteData.h"
#include "HostReplicatedPersistentPlayerData2.h"
#include "NonReplicatedPersistentPlayerData2.h"
#include "UnlockControlId.h"
#include "CPE_PersistentPlayerData2.generated.h"

USTRUCT(BlueprintType)
struct FCPE_PersistentPlayerData2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FUnlockControlId> unlockedEmotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> emotesSeen;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoundEmoteData SavedBoundEmotes[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHostReplicatedPersistentPlayerData2 HostReplicatedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNonReplicatedPersistentPlayerData2 NonReplicatedData;
    
    GINGERBREAD_API FCPE_PersistentPlayerData2();
};

