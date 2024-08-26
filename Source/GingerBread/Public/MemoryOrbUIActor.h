#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HudActor3D.h"
#include "MemoryOrbUIActor.generated.h"

class ASackboy;

UCLASS(Blueprintable)
class AMemoryOrbUIActor : public AHudActor3D {
    GENERATED_BODY()
public:
    AMemoryOrbUIActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowShatteredOrbCount(FVector WorldLocation, int32 Collected, int32 Total, ASackboy* Sackboy);
    
};

