#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CPE_AchievementLoadSaveData.h"
#include "CPE_CollectabellSaveData.h"
#include "CPE_CostumeSaveData.h"
#include "CPE_DLCLoadSaveData.h"
#include "CPE_PersistentPlayerData2.h"
#include "CPE_PinsLoadSaveData.h"
#include "CPE_PowerPinSaveData.h"
#include "CPE_SackboySaveData.h"
#include "CPE_SettingsLoadSaveData.h"
#include "CPE_StickerBookLoadSaveData.h"
#include "CPE_TournamentLoadSaveData.h"
#include "CPE_TutorialLoadSaveData.h"
#include "CPE_VoidSelectLoadSaveData.h"
#include "CPE_WorldSelectLoadSaveData.h"
#include "UnlockableItemTag.h"
#include "CrossPlatformExportData.generated.h"

USTRUCT(BlueprintType)
struct FCrossPlatformExportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SaveId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPE_DLCLoadSaveData DLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FUnlockableItemTag> PrevUnlockedItems;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int64> UnlockTimestamps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPE_SackboySaveData SackboySaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPE_CostumeSaveData CostumeSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPE_PowerPinSaveData PowerPins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPE_PinsLoadSaveData Pins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPE_AchievementLoadSaveData AchievementLoadSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPE_PersistentPlayerData2 PersistentPlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPE_CollectabellSaveData CollectabellSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPE_SettingsLoadSaveData Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPE_TournamentLoadSaveData TournamentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPE_TutorialLoadSaveData Tutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPE_StickerBookLoadSaveData StickerbookData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPE_VoidSelectLoadSaveData VoidSelectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCPE_WorldSelectLoadSaveData WorldSelectData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Checksum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLegacySaveData;
    
    GINGERBREAD_API FCrossPlatformExportData();
};

