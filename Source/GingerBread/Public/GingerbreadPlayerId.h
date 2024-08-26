#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GingerbreadPlayerId.generated.h"

USTRUCT(BlueprintType)
struct FGingerbreadPlayerId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 GuestIndex;
    
public:
    GINGERBREAD_API FGingerbreadPlayerId();
};
FORCEINLINE uint32 GetTypeHash(const FGingerbreadPlayerId) { return 0; }

