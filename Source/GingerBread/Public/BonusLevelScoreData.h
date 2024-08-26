#pragma once
#include "CoreMinimal.h"
#include "GingerbreadPlayerId.h"
#include "BonusLevelScoreData.generated.h"

USTRUCT(BlueprintType)
struct FBonusLevelScoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGingerbreadPlayerId PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 score;
    
    GINGERBREAD_API FBonusLevelScoreData();
};

