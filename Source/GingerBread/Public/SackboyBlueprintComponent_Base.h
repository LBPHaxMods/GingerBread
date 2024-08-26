#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SackboyBlueprintComponent_EventReceiver.h"
#include "SackboyBlueprintComponent_Base.generated.h"

class ASackboy;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USackboyBlueprintComponent_Base : public UActorComponent, public ISackboyBlueprintComponent_EventReceiver {
    GENERATED_BODY()
public:
    USackboyBlueprintComponent_Base(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ASackboy* GetSackboy();
    

    // Fix for true pure virtual functions not being implemented
};

