#pragma once
#include "CoreMinimal.h"
#include "DamageReactionControls.generated.h"

USTRUCT(BlueprintType)
struct FDamageReactionControls {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanRepulse;
    
    GINGERBREAD_API FDamageReactionControls();
};

