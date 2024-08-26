#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FxProperties.generated.h"

class ASackboy;

USTRUCT(BlueprintType)
struct FFxProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASackboy* TargetSackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 PositionOffset;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 LifeTime16;
    
public:
    GINGERBREAD_API FFxProperties();
};

