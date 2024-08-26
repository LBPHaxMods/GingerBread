#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GingerbreadPlayer.h"
#include "GingerbreadPlayerManager.generated.h"

class UGingerbreadLocalPlayer;

UCLASS(Blueprintable)
class GINGERBREAD_API UGingerbreadPlayerManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGingerbreadPlayer> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGingerbreadLocalPlayer*> PendingPlayers;
    
public:
    UGingerbreadPlayerManager();

};

