#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RollBumpMeshHapticsRow.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FRollBumpMeshHapticsRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> RollBumpMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelDistanceToBump;
    
    GINGERBREAD_API FRollBumpMeshHapticsRow();
};

