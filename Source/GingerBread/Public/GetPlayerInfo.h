#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DebugCommands_Interface.h"
#include "GetPlayerInfo.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGetPlayerInfo : public UActorComponent, public IDebugCommands_Interface {
    GENERATED_BODY()
public:
    UGetPlayerInfo(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

