#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "BounceSpeedData.h"
#include "BouncePadSharedData.generated.h"

class AActor;
class UPrimitiveComponent;

UINTERFACE()
class GINGERBREAD_API UBouncePadSharedData : public UInterface {
    GENERATED_BODY()
};

class GINGERBREAD_API IBouncePadSharedData : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual bool UpdateAnimatingLight(float theAnimationTime, int32 thePadIndex) PURE_VIRTUAL(UpdateAnimatingLight, return false;);
    
    UFUNCTION()
    virtual bool ShouldRestrictToPath() PURE_VIRTUAL(ShouldRestrictToPath, return false;);
    
    UFUNCTION()
    virtual void OnTriggered(AActor* LaunchedActor, UPrimitiveComponent* launchedPrim, const FVector& launchDirection, const FVector& approxHitPosition) PURE_VIRTUAL(OnTriggered,);
    
    UFUNCTION()
    virtual bool IsEnabled() PURE_VIRTUAL(IsEnabled, return false;);
    
    UFUNCTION()
    virtual int32 GetPathPointCount() PURE_VIRTUAL(GetPathPointCount, return 0;);
    
    UFUNCTION()
    virtual FVector GetPathPointAt(int32 Index) PURE_VIRTUAL(GetPathPointAt, return FVector{};);
    
    UFUNCTION()
    virtual float GetPathDuration() PURE_VIRTUAL(GetPathDuration, return 0.0f;);
    
    UFUNCTION()
    virtual bool GetManual() PURE_VIRTUAL(GetManual, return false;);
    
    UFUNCTION()
    virtual float GetDuration() PURE_VIRTUAL(GetDuration, return 0.0f;);
    
    UFUNCTION()
    virtual bool GetDisableSackboyInAirActions() PURE_VIRTUAL(GetDisableSackboyInAirActions, return false;);
    
    UFUNCTION()
    virtual bool GetDisableSackboyAirSteer() PURE_VIRTUAL(GetDisableSackboyAirSteer, return false;);
    
    UFUNCTION()
    virtual float GetDelay() PURE_VIRTUAL(GetDelay, return 0.0f;);
    
    UFUNCTION()
    virtual bool GetCancelVelocityAlongSurface() PURE_VIRTUAL(GetCancelVelocityAlongSurface, return false;);
    
    UFUNCTION()
    virtual void GetBounceSpeedData(FBounceSpeedData& BounceSpeedData) const PURE_VIRTUAL(GetBounceSpeedData,);
    
    UFUNCTION()
    virtual FVector GetBouncePadUpVector() PURE_VIRTUAL(GetBouncePadUpVector, return FVector{};);
    
    UFUNCTION()
    virtual FVector GetBouncePadForwardVector() PURE_VIRTUAL(GetBouncePadForwardVector, return FVector{};);
    
    UFUNCTION()
    virtual int32 CalculateBouncePadIndex(const FVector hitPos) const PURE_VIRTUAL(CalculateBouncePadIndex, return 0;);
    
};

