#pragma once
#include "CoreMinimal.h"
#include "CachedCostumeResources.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FCachedCostumeResources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ResourceObjects;
    
    GINGERBREAD_API FCachedCostumeResources();
};

