#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugCommands_Interface.h"
#include "SetToActorPosition.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USetToActorPosition : public UActorComponent, public IDebugCommands_Interface {
    GENERATED_BODY()
public:
    USetToActorPosition(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

