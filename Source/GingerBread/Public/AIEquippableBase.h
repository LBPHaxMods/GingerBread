#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AIEquippableBase.generated.h"

UCLASS(Blueprintable)
class AAIEquippableBase : public AActor {
    GENERATED_BODY()
public:
    AAIEquippableBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EquippableDropped(bool KeepStatic);
    
};

