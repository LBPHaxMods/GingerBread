#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnVortexFinishedDelegate.h"
#include "VexVortex.generated.h"

class UCurveFloat;
class UParticleSystemComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AVexVortex : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVortexFinished OnVortexFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* VFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NumberOfBombsToSpawnPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeSpawningBombs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenBombSpawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinishDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> VFXEmitterNamesToDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VFXErosionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VFXErosionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostVFXErosionTime;
    
    AVexVortex(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVortexCreated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinalBombSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisappearPoof();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBombSpawned();
    
};

