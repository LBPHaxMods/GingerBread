#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WAMWinLossBanner.generated.h"

class UCurveFloat;
class UStaticMeshComponent;
class UTimelineComponent;

UCLASS(Blueprintable)
class AWAMWinLossBanner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Win;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Loss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* BannerSpinTimeline;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BannerSpinTimeline_AlphaCurve;
    
public:
    AWAMWinLossBanner(const FObjectInitializer& ObjectInitializer);

};

