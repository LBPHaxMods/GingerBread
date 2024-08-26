#pragma once
#include "CoreMinimal.h"
#include "VexConveyorFlamePanelsServerData.generated.h"

USTRUCT(BlueprintType)
struct FVexConveyorFlamePanelsServerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFlamePanelPatternTimestamp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 FlamePanelPatternSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CompressedFlamePanelPattern;
    
    GINGERBREAD_API FVexConveyorFlamePanelsServerData();
};

