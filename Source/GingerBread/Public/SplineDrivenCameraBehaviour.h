#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CameraBehaviour.h"
#include "SplineDrivenCameraBehaviour.generated.h"

class AActor;
class USpawnPointComponent;
class USplineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API USplineDrivenCameraBehaviour : public UCameraBehaviour {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantSetTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantSnapToTargetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentDistanceAlongSpline;
    
public:
    USplineDrivenCameraBehaviour(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SnapToTargetLocation();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetDistance(float Distance);
    
    UFUNCTION(BlueprintCallable)
    void OnRegistrarAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable)
    void OnPrepareToInstantSpawn(USpawnPointComponent* SpawnPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USplineComponent* GetSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDistanceAlongSpline() const;
    
};

