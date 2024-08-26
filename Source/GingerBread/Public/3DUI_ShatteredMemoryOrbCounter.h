#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HudActor3D.h"
#include "3DUI_ShatteredMemoryOrbCounter.generated.h"

class APawn;
class UChildActorComponent;
class UCurveFloat;
class UGingerbreadWidgetComponent;
class UHudStaticMeshComponent;
class UTimelineComponent;

UCLASS(Blueprintable)
class A3DUI_ShatteredMemoryOrbCounter : public AHudActor3D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* TextChildActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudStaticMeshComponent* ShatteredOrbMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGingerbreadWidgetComponent* GingerbreadWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* OrbScaleTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OrbShowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OrbScaleCurve;
    
    A3DUI_ShatteredMemoryOrbCounter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Show(FVector WorldLocation, int32 CurrentCount, int32 TotalCount, APawn* Sackboy);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOrbScaleUpdate(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    void OnOrbScaleFinished();
    
};

