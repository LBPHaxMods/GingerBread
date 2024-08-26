#pragma once
#include "CoreMinimal.h"
#include "EWAMMoleReqPlayerEnum.h"
#include "WAMHoleInfo.generated.h"

class AWAMHole;

USTRUCT(BlueprintType)
struct FWAMHoleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWAMHole* Hole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WorshipPreGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WorshipPostGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CelebrateOffsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Round;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWAMMoleReqPlayerEnum::Type> ReqNumPlayers;
    
    GINGERBREAD_API FWAMHoleInfo();
};

