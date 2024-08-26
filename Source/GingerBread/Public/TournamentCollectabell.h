#pragma once
#include "CoreMinimal.h"
#include "UnlockControlTag.h"
#include "TournamentCollectabell.generated.h"

USTRUCT(BlueprintType)
struct FTournamentCollectabell {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockControlTag UnlockControlTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    GINGERBREAD_API FTournamentCollectabell();
};

