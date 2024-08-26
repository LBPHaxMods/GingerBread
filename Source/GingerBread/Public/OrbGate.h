#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EOrbGateLockState.h"
#include "OrbGate.generated.h"

class AZone;

UCLASS(Blueprintable)
class GINGERBREAD_API AOrbGate : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AZone* Zone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOrbGateLockState LockState;
    
public:
    AOrbGate(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockGate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshOrbGateSurface();
    
    UFUNCTION(BlueprintCallable)
    void RefreshOrbGateLockState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHostSaveDataReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGateUnlocked();
    
};

