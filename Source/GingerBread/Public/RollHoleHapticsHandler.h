#pragma once
#include "CoreMinimal.h"
#include "HapticRollItem.h"
#include "RollHoleHapticsHandler.generated.h"

class ASackboy;

USTRUCT(BlueprintType)
struct FRollHoleHapticsHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HapticsCompDistanceFromSackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugLocation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ASackboy*, FHapticRollItem> SackboysHapticsMap;
    
public:
    GINGERBREAD_API FRollHoleHapticsHandler();
};

