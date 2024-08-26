#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Network_GrappleTargetInfo.generated.h"

class UGrappleTargetComponent;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FNetwork_GrappleTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool GrappleIsAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGrappleTargetComponent* GrappleTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* GrappleTargetPrimitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 GrappleTargetPosition;
    
    GINGERBREAD_API FNetwork_GrappleTargetInfo();
};

