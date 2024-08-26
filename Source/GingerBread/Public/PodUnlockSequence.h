#pragma once
#include "CoreMinimal.h"
#include "WorldMapMiniSequence.h"
#include "PodUnlockSequence.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UPodUnlockSequence : public UWorldMapMiniSequence {
    GENERATED_BODY()
public:
    UPodUnlockSequence(const FObjectInitializer& ObjectInitializer);

};

