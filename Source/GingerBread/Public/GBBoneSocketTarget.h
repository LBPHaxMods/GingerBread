#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "GBSocketReference.h"
#include "GBBoneSocketTarget.generated.h"

USTRUCT(BlueprintType)
struct FGBBoneSocketTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSocket;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference BoneReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGBSocketReference SocketReference;
    
    GINGERBREAD_API FGBBoneSocketTarget();
};

