#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugCommands_Interface.h"
#include "GetActorsContaining.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGetActorsContaining : public UActorComponent, public IDebugCommands_Interface {
    GENERATED_BODY()
public:
    UGetActorsContaining(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

