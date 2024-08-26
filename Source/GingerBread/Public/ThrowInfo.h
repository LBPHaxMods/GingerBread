#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ThrowInfo.generated.h"

USTRUCT(BlueprintType)
struct FThrowInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ThrownLocalAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TargetLocalAttachPoint;
    
    GINGERBREAD_API FThrowInfo();
};

