#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AIBehaviorCoordinator.generated.h"

class AActor;
class UAICoordinatedAttackComponent;
class UWorld;

UCLASS(Blueprintable)
class UAIBehaviorCoordinator : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<AActor*, UAICoordinatedAttackComponent*> CoordinatedComponents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Actors;
    
public:
    UAIBehaviorCoordinator();

    UFUNCTION(BlueprintCallable)
    void SetActors(TArray<AActor*> _actors);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorAt(int32 _index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetWorld() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetTargets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetActors();
    
    UFUNCTION(BlueprintCallable)
    void Finish(bool _success);
    
};

