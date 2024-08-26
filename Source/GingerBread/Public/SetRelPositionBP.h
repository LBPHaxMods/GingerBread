#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugCommands_Interface.h"
#include "SetRelPositionBP.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USetRelPositionBP : public UActorComponent, public IDebugCommands_Interface {
    GENERATED_BODY()
public:
    USetRelPositionBP(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

