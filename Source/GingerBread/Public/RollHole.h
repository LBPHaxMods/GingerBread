#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERollHoleEndReason.h"
#include "RollHole.generated.h"

class ASackboy;
class UPrimitiveComponent;

UINTERFACE(MinimalAPI)
class URollHole : public UInterface {
    GENERATED_BODY()
};

class IRollHole : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void OnRollStart(ASackboy* Sackboy, UPrimitiveComponent* Collider, int32 splineIndex) PURE_VIRTUAL(OnRollStart,);
    
    UFUNCTION()
    virtual void OnRollEnd(ASackboy* Sackboy, UPrimitiveComponent* Collider, int32 splineIndex, ERollHoleEndReason EndReason) PURE_VIRTUAL(OnRollEnd,);
    
    UFUNCTION()
    virtual bool HasSplineEnded(FVector Position, FVector nextPos, float Distance, bool isMovingFwd, int32 splineIndex) PURE_VIRTUAL(HasSplineEnded, return false;);
    
    UFUNCTION()
    virtual FVector GetUpVector(float Distance, bool isMovingFwd, int32 splineIndex) const PURE_VIRTUAL(GetUpVector, return FVector{};);
    
    UFUNCTION()
    virtual float GetSplineSpeedMultiplier(int32 splineIndex) const PURE_VIRTUAL(GetSplineSpeedMultiplier, return 0.0f;);
    
    UFUNCTION()
    virtual FTransform GetNextTransform(float Distance, bool isMovingFwd, float Offset, int32 splineIndex) const PURE_VIRTUAL(GetNextTransform, return FTransform{};);
    
    UFUNCTION()
    virtual FVector GetNextPosition(float Distance, bool isMovingFwd, float Offset, int32 splineIndex) const PURE_VIRTUAL(GetNextPosition, return FVector{};);
    
    UFUNCTION()
    virtual void GetExitDirections(bool isMovingFwd, FVector& outForward, FVector& outUp, int32 splineIndex) const PURE_VIRTUAL(GetExitDirections,);
    
    UFUNCTION()
    virtual bool GetAllowZ() const PURE_VIRTUAL(GetAllowZ, return false;);
    
};

