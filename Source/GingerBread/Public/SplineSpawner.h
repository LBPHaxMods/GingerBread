#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerActorSpawner.h"
#include "SplineSpawner.generated.h"

class USceneComponent;
class USplineComponent;

UCLASS(Blueprintable)
class ASplineSpawner : public AActor, public ITriggerActorSpawner {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootHack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsClosedLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestroyWhenNoSpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> spawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Spacing;
    
public:
    ASplineSpawner(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SpawnActors();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUpNewSpline();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOldSpline();
    
    UFUNCTION(BlueprintCallable)
    void RefreshSpawnedObjects();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorsSpawned(const TArray<AActor*>& NewSpawnedActors);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyedInGame(AActor* DestroyedActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyedInEditor(AActor* DestroyedActor);
    

    // Fix for true pure virtual functions not being implemented
};

