#pragma once
#include "CoreMinimal.h"
#include "HapticRollItem.generated.h"

class UAkComponent;

USTRUCT(BlueprintType)
struct FHapticRollItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* HapticComponent;
    
    GINGERBREAD_API FHapticRollItem();
};

