#pragma once
#include "CoreMinimal.h"
#include "EHitPointActionStatus.h"
#include "EHitPointModifyStatus.h"
#include "HitPointModifyAttempt.h"
#include "HitPointModifyResult.generated.h"

class ASackboy;

USTRUCT(BlueprintType)
struct FHitPointModifyResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitPointModifyStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitPointModifyAttempt Attempt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitPointsBefore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitPointsAfter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitPointActionStatus ActioningStatus;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASackboy> ActioningSackboyClient;
    
    GINGERBREAD_API FHitPointModifyResult();
};

