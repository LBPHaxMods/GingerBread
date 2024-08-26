#pragma once
#include "CoreMinimal.h"
#include "BonusCollectabellSpawnerBase.h"
#include "EBonusRoomDensity.h"
#include "BonusCollectabellSpawningSpline.generated.h"

class AActor;
class USplineComponent;
class USplineFollowerComponent;

UCLASS(Abstract, Blueprintable)
class ABonusCollectabellSpawningSpline : public ABonusCollectabellSpawnerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnLargeCollectabells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBonusRoomDensity SpawnFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBonusRoomDensity TrainSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmallCollectabellDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargeCollectabellDistance;
    
public:
    ABonusCollectabellSpawningSpline(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnSplineEndReached(USplineFollowerComponent* pSplineFollowerComponent, bool WasTravellingForward);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* pActor);
    
    UFUNCTION(BlueprintCallable)
    void EDITOR_CopyProperties(bool InStartsActive, bool InIsManuallyTriggered, bool InSpawnLargeCollectabells, EBonusRoomDensity InSpawnFrequency, EBonusRoomDensity InTrainSize, float InInitialDelay, float InTravelTime, USplineComponent* InSplineComponent);
    
    UFUNCTION(BlueprintCallable)
    void AUTH_SpawnLoop();
    
};

