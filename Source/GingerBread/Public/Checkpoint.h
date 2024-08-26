#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DarkMatterEngineMovable.h"
#include "EWorldLocation.h"
#include "Checkpoint.generated.h"

class ASackboy;
class UMaterialInterface;
class USpawnPointComponent;

UCLASS(Blueprintable)
class ACheckpoint : public AActor, public IDarkMatterEngineMovable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpawnPointComponent* SpawnPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStartingCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EntranceGateResetLives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableAutoActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMaterialOverrideWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldLocation MaterialOverrideWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldLocation, TSoftObjectPtr<UMaterialInterface>> MaterialsMap;
    
public:
    ACheckpoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnLevelSettingsAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActivate(USpawnPointComponent* SpawnPoint, ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpawnPointComponent* GetSpawnPoint() const;
    

    // Fix for true pure virtual functions not being implemented
};

