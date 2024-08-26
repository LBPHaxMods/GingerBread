#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AISpawnerDestroyEventDelegate.h"
#include "AISpawnerSpawnEventDelegate.h"
#include "EAISpawnState.h"
#include "EEnemyLevelType.h"
#include "EWorldLocation.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "AISpawner.generated.h"

class AAIPatrolBase;
class AActor;
class AGingerbreadAICharacter;
class UAkAudioEvent;
class UBoxComponent;
class UParticleSystem;
class UTriggerActorComponent;

UCLASS(Abstract, Blueprintable)
class AAISpawner : public APlayerCountActor, public IWakeSleep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SpawnVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnVFXAISpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnVFXOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnVFXScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SpawnSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldLocation, UClass*> ClassesToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyLevelType LevelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowInCutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAISpawnState SpawnState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIPatrolBase* PatrolObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnManually;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldLocation ForcedWorldLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISpawnerSpawnEvent OnAIsSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISpawnerDestroyEvent OnAIsDestroyed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AGingerbreadAICharacter*> SpawnedAIs;
    
public:
    AAISpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateWorldLocation_EditorOnlyOutOfPlay();
    
    UFUNCTION(BlueprintCallable)
    void TriggerManualSpawn();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlaySpawnEffects(const FVector& SpawnLocation, const FRotator& SpawnRotation);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLevelSettingsAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAISpawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWorldLocation GetWorldLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AGingerbreadAICharacter*> GetAIs() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AIDestroyed(AActor* AIActor);
    

    // Fix for true pure virtual functions not being implemented
};

