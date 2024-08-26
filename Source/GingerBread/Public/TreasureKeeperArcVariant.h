#pragma once
#include "CoreMinimal.h"
#include "ArcParameters.h"
#include "ETreasureKeeperState.h"
#include "TreasureKeeperArcVariant.generated.h"

USTRUCT(BlueprintType)
struct FTreasureKeeperArcVariant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArcParameters ArcParameters;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ETreasureKeeperState CurrentState;
    
public:
    GINGERBREAD_API FTreasureKeeperArcVariant();
};

