#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MeanieSpinEmergencyStopEventDelegate.h"
#include "MeanieSpinSimpleEventDelegate.h"
#include "MeanieSpinUpdateEventDelegate.h"
#include "SpinAttackEmergencyStopSettings.h"
#include "SpinAttackSettings.h"
#include "MeanieSpinAttackComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMeanieSpinAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpinAttackSettings StandardSpinAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpinAttackSettings EscalatedSpinAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpinAttackEmergencyStopSettings EmergencyStopSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InnerRingRotatesClockwise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotationDirectionTogglesAfterEachAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BombPopAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PopBombsDelay;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeanieSpinSimpleEvent PopBombs;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeanieSpinSimpleEvent ReenableBombs;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeanieSpinUpdateEvent SpinUpdateEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeanieSpinSimpleEvent SpinStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeanieSpinEmergencyStopEvent SpinStartedEmergencyStoppingEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeanieSpinSimpleEvent SpinStoppedEvent;
    
    UMeanieSpinAttackComponent(const FObjectInitializer& ObjectInitializer);

};

