#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Network_SackboyAuthNetStatusFrame_Base.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FNetwork_SackboyAuthNetStatusFrame_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TimeSinceServerTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SupportPrim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 SupportRelativePosition;
    
    GINGERBREAD_API FNetwork_SackboyAuthNetStatusFrame_Base();
};

