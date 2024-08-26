#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ActorAssignedCollectable.generated.h"

class AMemoryOrb;

UINTERFACE(Blueprintable)
class UActorAssignedCollectable : public UInterface {
    GENERATED_BODY()
};

class IActorAssignedCollectable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AMemoryOrb* GetMemoryActor();
    
};

