#pragma once
#include "CoreMinimal.h"
#include "NaomiPunchParams.h"
#include "NaomiPunchSequence.generated.h"

USTRUCT(BlueprintType)
struct FNaomiPunchSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNaomiPunchParams> PunchSequence;
    
    GINGERBREAD_API FNaomiPunchSequence();
};

