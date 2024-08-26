#pragma once
#include "CoreMinimal.h"
#include "SetEnabledPrimitiveData.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FSetEnabledPrimitiveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PrimitiveComponent;
    
    GINGERBREAD_API FSetEnabledPrimitiveData();
};

