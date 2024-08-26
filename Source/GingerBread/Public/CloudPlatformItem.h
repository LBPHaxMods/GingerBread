#pragma once
#include "CoreMinimal.h"
#include "CloudPlatformItem.generated.h"

class ASackboy;

USTRUCT(BlueprintType)
struct FCloudPlatformItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* Sackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float TimeFloating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialZVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float CurrentZVelozity;
    
    GINGERBREAD_API FCloudPlatformItem();
};

