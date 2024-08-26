#pragma once
#include "CoreMinimal.h"
#include "MuteAntGroupChargeElement.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMuteAntGroupChargeElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Row;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Column;
    
    GINGERBREAD_API FMuteAntGroupChargeElement();
};

