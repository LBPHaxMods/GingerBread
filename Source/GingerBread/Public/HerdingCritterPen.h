#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HerdingCritterPenCompleteDelegate.h"
#include "HerdingCritterPenCountChangedDelegate.h"
#include "PlayerCountActor.h"
#include "HerdingCritterPen.generated.h"

class AActor;
class UBoxComponent;
class UInteractionComponent;
class UPickupContainerComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AHerdingCritterPen : public APlayerCountActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHerdingCritterPenComplete OnHerdingCritterPenComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHerdingCritterPenCountChanged OnHerdingCrittersEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHerdingCritterPenCountChanged OnHerdingCrittersExited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* DetectionBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPickupContainerComponent* PickupContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* InteractionComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetCritterCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentCritterCount, meta=(AllowPrivateAccess=true))
    int32 CurrentCritterCount;
    
public:
    AHerdingCritterPen(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentCritterCount(const int32 PreviousCritterCount);
    
    UFUNCTION(BlueprintCallable)
    void OnDetectionBoxEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDetectionBoxEndInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnDetectionBoxBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnDetectionBoxBeginInteract(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetTargetCritterCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentCritterCount();
    
};

