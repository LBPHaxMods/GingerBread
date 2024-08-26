#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TotemModule.generated.h"

class UHitPointsComponent;

UCLASS(Abstract, Blueprintable)
class ATotemModule : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHitPointsComponent* HitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTotemActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTotemOverdriven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MainPrimaryTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PrimaryTargets;
    
    ATotemModule(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* main_primary_target, const TArray<AActor*> primary_targets);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTotemModuleDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTotemModuleActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetUpdate(AActor* main_primary_target, const TArray<AActor*>& primary_targets);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartFalling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExitOverdriveMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterOverdriveMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndFalling();
    
    UFUNCTION(BlueprintCallable)
    void HandleStopFalling();
    
    UFUNCTION(BlueprintCallable)
    void HandleStartFalling();
    
    UFUNCTION(BlueprintCallable)
    void ExitOverdriveMode();
    
    UFUNCTION(BlueprintCallable)
    void EnterOverdriveMode();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateTotemModule();
    
    UFUNCTION(BlueprintCallable)
    void ActivateTotemModule();
    
};

