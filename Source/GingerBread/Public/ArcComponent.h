#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "ArcParameters.h"
#include "ArcComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UArcComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArcParameters ArcParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpdateArcParametersWhenMoved;
    
    UArcComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTargetLocation(const FVector& WorldTargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetActor(AActor* NewTargetActor);
    
    UFUNCTION(BlueprintCallable)
    void LaunchPrimitiveComponent(UPrimitiveComponent* ComponentToLaunch, const bool bDisableAirDrag);
    
    UFUNCTION(BlueprintCallable)
    void LaunchActor(AActor* ActorToLaunch, const bool bDisableAirDrag, const bool bDisableActions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVelocityAtTime(const float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPositionAtTime(const float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInitialVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInitialLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFinalLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetApexTime() const;
    
};

