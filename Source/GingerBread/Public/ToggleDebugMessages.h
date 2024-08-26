#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugCommands_Interface.h"
#include "ToggleDebugMessages.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UToggleDebugMessages : public UActorComponent, public IDebugCommands_Interface {
    GENERATED_BODY()
public:
    UToggleDebugMessages(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

