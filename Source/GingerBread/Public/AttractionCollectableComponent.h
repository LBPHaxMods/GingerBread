#pragma once
#include "CoreMinimal.h"
#include "CollectableComponentBase.h"
#include "AttractionCollectableComponent.generated.h"

class ASackboy;
class UCurveFloat;
class UTimelineComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAttractionCollectableComponent : public UCollectableComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* MotionTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TimelineCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDistance;
    
public:
    UAttractionCollectableComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnMotionTimelineUpdate(const float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void OnAttractingSackboyDied(ASackboy* pSackboy);
    
};

