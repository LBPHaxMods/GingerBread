#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "LevelObject.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "LookAtEye.generated.h"

class AProximityActivator;
class ASackboy;
class UArrowComponent;
class UBillboardComponent;
class UInteractionComponent;
class UOverlapManagerComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ALookAtEye : public APlayerCountActor, public IWakeSleep, public ILevelObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AProximityActivator* Activator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WatchClosestSackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowDebugArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReturnHome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReturnHomeSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSwitchDelay;
    
    ALookAtEye(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WatchLoop();
    
    UFUNCTION(BlueprintCallable)
    void StopWatching();
    
    UFUNCTION(BlueprintCallable)
    void StartWatching();
    
    UFUNCTION(BlueprintCallable)
    void SelectNewTarget();
    
    UFUNCTION(BlueprintCallable)
    void RotateToTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnEndInteractSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginInteractSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp);
    
    UFUNCTION(BlueprintCallable)
    void MultiTargetTimerStop();
    
    UFUNCTION(BlueprintCallable)
    void MultiTargetTimerStart();
    
    UFUNCTION(BlueprintCallable)
    FVector GetSackboysAverageLocation();
    
    UFUNCTION()
    TWeakObjectPtr<ASackboy> GetClosestSackboy() const;
    

    // Fix for true pure virtual functions not being implemented
};

