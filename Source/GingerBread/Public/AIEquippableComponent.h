#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AIEquippableComponent.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIEquippableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAIEquippableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EquipItem(FVector SpawnLocation, FRotator SpawnRotation, APawn* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DropItem(bool KeepStatic);
    
};

