#pragma once
#include "CoreMinimal.h"
#include "ESackboyStruggleReason.h"
#include "ESackboyStruggleReleaseType.h"
#include "SackboyStruggleData.generated.h"

USTRUCT(BlueprintType)
struct FSackboyStruggleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESackboyStruggleReleaseType ReleaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESackboyStruggleReason StruggleReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReleaseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonInputWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StickAxisInputWeight;
    
    GINGERBREAD_API FSackboyStruggleData();
};

