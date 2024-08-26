#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PSNObjectID.h"
#include "ActivityRow.h"
#include "ActivityRowChallenge.generated.h"

USTRUCT(BlueprintType)
struct FActivityRowChallenge : public FActivityRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle WorldLevelRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPSNObjectID TournamentActivityName;
    
    GINGERBREAD_API FActivityRowChallenge();
};

