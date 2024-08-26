#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugCommands_Interface.h"
#include "GetSystemInfo.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGetSystemInfo : public UActorComponent, public IDebugCommands_Interface {
    GENERATED_BODY()
public:
    UGetSystemInfo(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

