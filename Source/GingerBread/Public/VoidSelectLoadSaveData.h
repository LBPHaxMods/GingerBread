#pragma once
#include "CoreMinimal.h"
#include "VoidSelectLevelSaveKey.h"
#include "VoidSelectLoadSaveData.generated.h"

USTRUCT(BlueprintType)
struct FVoidSelectLoadSaveData {
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
    
    GINGERBREAD_API FVoidSelectLoadSaveData();
};

