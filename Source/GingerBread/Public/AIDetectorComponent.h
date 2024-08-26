#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AIDetectorComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UAIDetectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastKnownPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysInDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysInFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SixthSenseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceDivisorHeuristic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreferTargetsUpAhead;
    
    UAIDetectorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSecondaryTargets(TArray<AActor*> detectionTargets);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryTargets(TArray<AActor*> detectionTargets);
    
    UFUNCTION(BlueprintCallable)
    void SetMainSecondaryTarget(AActor* primaryDetectionTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetMainPrimaryTarget(AActor* primaryDetectionTarget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMainPrimaryTargetChanged(AActor* OldTarget, AActor* NewTarget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetSecondaryTargets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetPrimaryTargets() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetMainSecondaryTarget();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetMainPrimaryTarget();
    
    UFUNCTION(BlueprintCallable)
    void ClearSecondaryTargets();
    
    UFUNCTION(BlueprintCallable)
    void ClearPrimaryTargets();
    
    UFUNCTION(BlueprintCallable)
    void AddSecondaryTarget(AActor* detectionTarget);
    
    UFUNCTION(BlueprintCallable)
    void AddPrimaryTarget(AActor* detectionTarget);
    
};

