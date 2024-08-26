#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIDetectionCoordinator.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable)
class UAIDetectionCoordinator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EvaluateOneActorPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CoordinatedActors;
    
    UAIDetectionCoordinator();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDetections(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetWorld() const;
    
};

