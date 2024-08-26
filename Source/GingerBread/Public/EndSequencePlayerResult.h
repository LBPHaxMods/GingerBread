#pragma once
#include "CoreMinimal.h"
#include "EPlayerSlot.h"
#include "GingerbreadPlayerId.h"
#include "EndSequencePlayerResult.generated.h"

USTRUCT(BlueprintType)
struct FEndSequencePlayerResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGingerbreadPlayerId PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerSlot UISlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 score;
    
    GINGERBREAD_API FEndSequencePlayerResult();
};

