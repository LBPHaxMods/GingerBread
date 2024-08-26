#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugCommands_Interface.h"
#include "SetPositionBP.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USetPositionBP : public UActorComponent, public IDebugCommands_Interface {
    GENERATED_BODY()
public:
    USetPositionBP(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

