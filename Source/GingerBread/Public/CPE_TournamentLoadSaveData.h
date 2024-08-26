#pragma once
#include "CoreMinimal.h"
#include "TournamentNotificationData.h"
#include "CPE_TournamentLoadSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCPE_TournamentLoadSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FTournamentNotificationData> NotificationsMap;
    
    GINGERBREAD_API FCPE_TournamentLoadSaveData();
};

