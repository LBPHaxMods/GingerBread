#pragma once
#include "CoreMinimal.h"
#include "WorldMapMiniSequence.h"
#include "CostumeShopUnlockSequence.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UCostumeShopUnlockSequence : public UWorldMapMiniSequence {
    GENERATED_BODY()
public:
    UCostumeShopUnlockSequence(const FObjectInitializer& ObjectInitializer);

};

