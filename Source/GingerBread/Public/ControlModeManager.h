#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EControlMode.h"
#include "ControlModeManager.generated.h"

class UBlastersMode;
class UBoomerangMode;
class UControlMode;
class UGrappleHookMode;
class UPowerGloveMode;

UCLASS(Blueprintable)
class GINGERBREAD_API AControlModeManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDraw;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControlMode CurrentModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UControlMode* CurrentControlMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoomerangMode* BoomerangMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPowerGloveMode* PowerGloveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGrappleHookMode* GrappleHookMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlastersMode* BlastersMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UControlMode*> ControlModes;
    
public:
    AControlModeManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetControlMode(EControlMode NextModeType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsControlModeActive(EControlMode Mode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControlMode GetActiveMode() const;
    
};

