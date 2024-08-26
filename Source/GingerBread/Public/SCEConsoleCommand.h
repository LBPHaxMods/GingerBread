#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugCommands_Interface.h"
#include "SCEConsoleCommand.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USCEConsoleCommand : public UActorComponent, public IDebugCommands_Interface {
    GENERATED_BODY()
public:
    USCEConsoleCommand(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

