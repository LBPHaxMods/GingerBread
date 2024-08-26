#pragma once
#include "CoreMinimal.h"
#include "VoidSelectLevelSaveKey.h"
#include "CPE_VoidSelectLoadSaveData.generated.h"

USTRUCT(BlueprintType)
struct FCPE_VoidSelectLoadSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SeenIntro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CompletedGolds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 LastOpenedPlaytime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FVoidSelectLevelSaveKey> SeenLevels;
    
    GINGERBREAD_API FCPE_VoidSelectLoadSaveData();
};

