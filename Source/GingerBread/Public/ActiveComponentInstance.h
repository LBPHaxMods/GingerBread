#pragma once
#include "CoreMinimal.h"
#include "PhysicsContactEvent.h"
#include "ActiveComponentInstance.generated.h"

class UPhysicsAudioComponent;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FActiveComponentInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsAudioComponent* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhysicsContactEvent ContactEvent;
    
    GINGERBREAD_API FActiveComponentInstance();
};

