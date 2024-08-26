#pragma once
#include "CoreMinimal.h"
#include "BonusCollectabellSpawnerBase.h"
#include "EBonusRoomDensity.h"
#include "BonusCollectabellSpawningVolume.generated.h"

class AActor;
class UBoxComponent;
class UInteractionComponent;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class ABonusCollectabellSpawningVolume : public ABonusCollectabellSpawnerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SpawnVolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CleanupVolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* CleanupInteractComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnLargeCollectabells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBonusRoomDensity SpawnFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBonusRoomDensity MaxConcurrentItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TagsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumAngularImpulse;
    
public:
    ABonusCollectabellSpawningVolume(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCleanupVolumeEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnCleanupVolumeEndInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* pActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EDITOR_CopyProperties(bool InStartsActive, bool InIsManuallyTriggered, bool InSpawnLargeCollectabells, EBonusRoomDensity InSpawnFrequency, EBonusRoomDensity InMaxConcurrentItems, UBoxComponent* InSpawnVolumeComponent, UBoxComponent* InCleanupVolumeComponent);
    
private:
    UFUNCTION(BlueprintCallable)
    void AUTH_SpawnLoop();
    
};

