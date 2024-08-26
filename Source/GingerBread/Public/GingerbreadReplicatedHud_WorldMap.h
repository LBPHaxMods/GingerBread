#pragma once
#include "CoreMinimal.h"
#include "GingerbreadReplicatedHud.h"
#include "GingerbreadReplicatedHud_WorldMap.generated.h"

UCLASS(Blueprintable)
class AGingerbreadReplicatedHud_WorldMap : public AGingerbreadReplicatedHud {
    GENERATED_BODY()
public:
    AGingerbreadReplicatedHud_WorldMap(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnCostumeShopCloseStart();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnCostumeSelectCloseStart();
    
};

