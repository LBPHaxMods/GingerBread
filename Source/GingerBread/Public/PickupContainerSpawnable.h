#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PickupContainerOpenWithModifierTableRowInfo.h"
#include "PickupContainerSpawnable.generated.h"

class ASackboy;
class UPickupContainerComponent;

UINTERFACE(Blueprintable)
class GINGERBREAD_API UPickupContainerSpawnable : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API IPickupContainerSpawnable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnedByPickupContainerWithModifierTableRowInfo(UPickupContainerComponent* PickupContainerComponent, ASackboy* InstigatingSackboy, const FPickupContainerOpenWithModifierTableRowInfo& OpeningInfo, const bool ShouldAutoTargetInstigator, const int32 SpawnIndex);
    
};

