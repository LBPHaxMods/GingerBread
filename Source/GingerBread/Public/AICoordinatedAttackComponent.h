#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AICoordinatedAttackComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAICoordinatedAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCoordinatorRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBTRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInterrupted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBTAbleToAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BTAbleTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoordinatedAttackAbleTimeout;
    
    UAICoordinatedAttackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBTAble(const bool Able);
    
    UFUNCTION(BlueprintCallable)
    void OnCoordinatorStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnCoordinatorFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnBTStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnBTFinished(const bool DidSucceed);
    
    UFUNCTION(BlueprintCallable)
    void InterruptBT();
    
    UFUNCTION(BlueprintCallable)
    bool CanStart();
    
};

