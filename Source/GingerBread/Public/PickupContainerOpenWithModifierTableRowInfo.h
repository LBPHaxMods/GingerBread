#pragma once
#include "CoreMinimal.h"
#include "HitPointsModifierTableRow.h"
#include "PickupContainerOpenWithModifierTableRowInfo.generated.h"

USTRUCT(BlueprintType)
struct FPickupContainerOpenWithModifierTableRowInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WasDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitPointsModifierTableRow HitpointModifierTableRow;
    
    GINGERBREAD_API FPickupContainerOpenWithModifierTableRowInfo();
};

