#pragma once
#include "CoreMinimal.h"
#include "NaomiPunchParams.generated.h"

USTRUCT(BlueprintType)
struct FNaomiPunchParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRightHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsChargedPunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforePunch;
    
    GINGERBREAD_API FNaomiPunchParams();
};

