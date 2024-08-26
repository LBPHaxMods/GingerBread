#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SlapBoltNetInfo.generated.h"

USTRUCT(BlueprintType)
struct FSlapBoltNetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize LinVel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize AngVel;
    
    GINGERBREAD_API FSlapBoltNetInfo();
};

