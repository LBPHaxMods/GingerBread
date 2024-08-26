#pragma once
#include "CoreMinimal.h"
#include "HitPointContactData.h"
#include "HitPointsModifierTableRow.h"
#include "HitPointsTableRow.h"
#include "HitPointModifyAttempt.generated.h"

USTRUCT(BlueprintType)
struct FHitPointModifyAttempt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitPointsModifierTableRow SourceTableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitPointsTableRow TargetTableEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitPointContactData ContactData;
    
    GINGERBREAD_API FHitPointModifyAttempt();
};

