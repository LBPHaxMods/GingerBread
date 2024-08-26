#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AutoVirtualControllerDelegate.h"
#include "ESackboyActions.h"
#include "VirtualControllerEventDelegateDelegate.h"
#include "AutomatedVirtualController.generated.h"

class AActor;
class ASackboy;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UAutomatedVirtualController : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVirtualControllerEventDelegate ReachedCurrentWalkToTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVirtualControllerEventDelegate FinishedAllWalkToTargets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionsDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionsPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionsReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AutoReleaseActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> ActionAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestingWalkMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MovementDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OwningPlayerID;
    
public:
    UAutomatedVirtualController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TurnToWorldDirection(FVector WorldLookDirection);
    
    UFUNCTION(BlueprintCallable)
    void TurnToObject(AActor* ActorToLookAt);
    
    UFUNCTION(BlueprintCallable)
    void StopMovementAnalogInput();
    
    UFUNCTION(BlueprintCallable)
    void StartMovementAnalogInput(const FVector& Input);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkDirection(const FVector& NewDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetRequestingWalkMovement(bool IsRequesting);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerTilt(float Yaw, float Pitch, float Roll);
    
    UFUNCTION(BlueprintCallable)
    void ResetWalkToQueue();
    
    UFUNCTION(BlueprintCallable)
    void ResetControllerTilt();
    
    UFUNCTION(BlueprintCallable)
    void RemoveCurrentWalkToTarget();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseSackboyAction(ESackboyActions ActionType);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAction(const FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void PressSackboyAction(ESackboyActions ActionType, bool AutoRelease);
    
    UFUNCTION(BlueprintCallable)
    void PressAction(const FName ActionName, bool AutoRelease);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequestingMovementOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionReleased(const FName Action) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionPressed(const FName Action) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionDown(const FName Action) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWalkTargetRelativeOffset(FVector& OutOffset);
    
    UFUNCTION(BlueprintCallable)
    bool GetWalkTargetPosition(FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWalkTargetActor(AActor*& OutActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSimulatedStickInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOwningSackboyPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASackboy* GetOwningSackboy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActionAxis(const FName Action) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CallVirtualControllerActionFinishedEvent(const FAutoVirtualControllerDelegate& EventToCall);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplySackboyActionAxis(ESackboyActions ActionType, float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void ApplyActionAxis(const FName ActionName, float AxisValue);
    
    UFUNCTION(BlueprintCallable)
    void AddWalkToPointTarget(const FVector PointTarget);
    
    UFUNCTION(BlueprintCallable)
    void AddWalkToActorTarget(AActor* ActorTarget);
    
    UFUNCTION(BlueprintCallable)
    void AddWalkToActorRelativeTarget(AActor* ActorTarget, const FVector RelativeOffset, bool IsOffsetInActorLocalSpace);
    
};

