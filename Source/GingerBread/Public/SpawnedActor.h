#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPickupContainerContent.h"
#include "SpawnedActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSpawnedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> SpawnedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ImpulseDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPickupContainerContent::Type> Type;
    
    GINGERBREAD_API FSpawnedActor();
};

