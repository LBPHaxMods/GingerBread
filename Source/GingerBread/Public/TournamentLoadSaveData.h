#pragma once
#include "CoreMinimal.h"
#include "TournamentData.h"
#include "TournamentNotificationData.h"
#include "TournamentLoadSaveData.generated.h"

USTRUCT(BlueprintType)
struct FTournamentLoadSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FTournamentNotificationData> NotificationsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FTournamentData> TournamentDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AwardedCollectabells;
    
    GINGERBREAD_API FTournamentLoadSaveData();
};

