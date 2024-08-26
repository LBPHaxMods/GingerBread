#pragma once
#include "CoreMinimal.h"
#include "ECloudPlatformItemType.h"
#include "CloudPlatformGridItem.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCloudPlatformGridItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECloudPlatformItemType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float TimeFloating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialZVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float CurrentZVelozity;
    
    GINGERBREAD_API FCloudPlatformGridItem();
};

