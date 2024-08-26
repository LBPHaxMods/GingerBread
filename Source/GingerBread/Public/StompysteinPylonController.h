#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StompysteinPylonControllerServerState.h"
#include "StompysteinPylonController.generated.h"

class AStompySpacePylon;
class UCSPHelperComponent;
class UCurveFloat;
class USceneComponent;

UCLASS(Blueprintable)
class AStompysteinPylonController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RoatingPlatform1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RoatingPlatform2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStompySpacePylon*> InsidePylons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStompySpacePylon*> OutsidePylons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpinOneWaySpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SpinTwoWaySpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinTwoWayCurveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinTwoWayReverseDirectionTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinTwoWayReverseDirectionTimeMax;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FStompysteinPylonControllerServerState ServerState;
    
public:
    AStompysteinPylonController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTwoWayMovementStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTwoWayMovementDirectionChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOneWayMovementStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMovementStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentSpeed() const;
    
};

