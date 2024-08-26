#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TournamentData.generated.h"

USTRUCT(BlueprintType)
struct FTournamentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTermsAccepted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan BestCompletionTime;
    
    GINGERBREAD_API FTournamentData();
};

