#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DoorwayBase.h"
#include "ERegularDoorwayState.h"
#include "EWorldLocation.h"
#include "RegularDoorwayStateEventDelegate.h"
#include "SoftMaterialIndexPairArray.h"
#include "RegularDoorway.generated.h"

class AActor;
class UAkComponent;
class UBoxComponent;
class UInteractionComponent;
class UMaterialInterface;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class USpawnPointComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ARegularDoorway : public ADoorwayBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TunnelMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DoorMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* DoorCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* EntranceDetectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* EntranceInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreNearbySackboys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldLocation, TSoftObjectPtr<UMaterialInterface>> ThreadMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWorldLocation, FSoftMaterialIndexPairArray> MaterialsPerWorld;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegularDoorwayStateEvent OnDoorwayOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegularDoorwayStateEvent OnDoorwayClosed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CachedThreadMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CachedMaterials;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    ERegularDoorwayState State;
    
public:
    ARegularDoorway(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetIgnoreNearbySackboys(bool NewValue);
    
protected:
    UFUNCTION()
    void OnRep_State(ERegularDoorwayState OldState);
    
    UFUNCTION(BlueprintCallable)
    void OnPreSpawn(USpawnPointComponent* pSpawnPointComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnPrepareToInstantSpawn(USpawnPointComponent* pSpawnPointComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnPostSpawn(USpawnPointComponent* pSpawnPointComponent, bool FirstSpawn);
    
    UFUNCTION(BlueprintCallable)
    void OnEntranceDetectionEndOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnEntranceDetectionEndInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnEntranceDetectionBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnEntranceDetectionBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherComp);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoorwayOpen() const;
    
};

