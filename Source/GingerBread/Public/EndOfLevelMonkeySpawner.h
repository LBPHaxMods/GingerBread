#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EndOfLevelMonkeyPositions.h"
#include "Templates/SubclassOf.h"
#include "EndOfLevelMonkeySpawner.generated.h"

class ABabyMonkey;
class UBoxComponent;
class UInteractionComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class AEndOfLevelMonkeySpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TargetedRollingTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* TargetRollingInteractTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEndOfLevelMonkeyPositions> MonkeyPositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABabyMonkey> BabyMonkeyClass;
    
public:
    AEndOfLevelMonkeySpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartMonkeysRolling();
    
    UFUNCTION(BlueprintCallable)
    void SpawnMonkeys();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetedRollingTriggerBeginOverlap(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherPrimitive, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetedRollingTriggerBeginInteract(UInteractionComponent* pOverlappedComponent, AActor* pOtherActor, UInteractionComponent* pOtherPrimitive);
    
};

