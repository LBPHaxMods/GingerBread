#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AIPatrolBase.generated.h"

class AAIController;
class AGingerbreadAICharacter;
class UBehaviorTree;

UCLASS(Blueprintable)
class AAIPatrolBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AAIController*, FVector> Controllers;
    
    AAIPatrolBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnregisterAI(AAIController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReplanNewTarget(AAIController* Controller, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterAI(AAIController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UBehaviorTree* GetPatrolBehaviour();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetCurrentPatrolTarget(AAIController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AdjustWalkSpeed(AGingerbreadAICharacter* Character, FVector TargetLocation, float MoveSpeed);
    
};

