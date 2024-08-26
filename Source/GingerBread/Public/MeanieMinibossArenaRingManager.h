#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMeanieAttackChoice.h"
#include "MeanieArenaManagerServerState.h"
#include "MeanieMinibossArenaRingManager.generated.h"

class AMeanieMiniboss;
class UCSPHelperComponent;
class UMinibossMeaniePunchAttackComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AMeanieMinibossArenaRingManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InnerRingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OuterRingActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMeanieArenaManagerServerState ServerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UMinibossMeaniePunchAttackComponent* PunchComponent;
    
public:
    AMeanieMinibossArenaRingManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartSpin(EMeanieAttackChoice AttackType);
    
    UFUNCTION(BlueprintCallable)
    void SetPunchComponent(AMeanieMiniboss* MeanieMiniboss);
    
};

