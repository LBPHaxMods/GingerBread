#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralActor.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API AProceduralActor : public AActor {
    GENERATED_BODY()
public:
    AProceduralActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDragFinished() const;
    
    UFUNCTION(BlueprintCallable)
    bool EnqueueConstructionScriptCall();
    
};

