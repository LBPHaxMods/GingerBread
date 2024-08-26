#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PrizeCollectedDelegate.h"
#include "WAMHole.h"
#include "WAMPrizeHole.generated.h"

class UArrowComponent;
class UChildActorComponent;
class UCurveFloat;
class UCurveVector;
class USceneComponent;
class USphereComponent;
class USplineComponent;
class UTimelineComponent;

UCLASS(Blueprintable)
class AWAMPrizeHole : public AWAMHole {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* DetectionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* Prize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* IdlePrizePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AwardPrizePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* RewardSpitArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* OrbFlightTimeline;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PrizeVomitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OrbFlightTimelineAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OrbFlightTimelineScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OrbFlightTimelineScaleXCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* OrbFlightTimelineBounceTranslationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionRadius;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrizeCollected PrizeCollected;
    
    AWAMPrizeHole(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void VomitPrize();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopPrizeScale();
    
private:
    UFUNCTION(BlueprintCallable)
    void OrbFlightTimelineScaleX_Update(const float ScaleX);
    
    UFUNCTION(BlueprintCallable)
    void OrbFlightTimelineScale_Update(const float Scale);
    
    UFUNCTION(BlueprintCallable)
    void OrbFlightTimelineBounceTranslation_Update(const FVector& Translation);
    
    UFUNCTION(BlueprintCallable)
    void OrbFlightTimelineAlpha_Update(const float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void OrbFlightTimeline_Update();
    
    UFUNCTION(BlueprintCallable)
    void OnMemoryOrbCollected();
    
};

