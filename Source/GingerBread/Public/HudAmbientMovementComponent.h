#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "EHudAmbientTransformSpace.h"
#include "HudAmbientMovementAxisSettings.h"
#include "HudAmbientMovementRhythmicSettings.h"
#include "HudAmbientMovementSpringSettings.h"
#include "HudAmbientMovementComponent.generated.h"

class AHudActor3D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHudAmbientMovementComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AmbientEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHudAmbientTransformSpace AmbientTranslationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHudAmbientTransformSpace AmbientRotationSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RhythmicBeatsPerLoop;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudAmbientMovementAxisSettings CameraAxisSettings[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHudAmbientMovementRhythmicSettings> RhythmicSettings;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudAmbientMovementSpringSettings SpringAxisSettings[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHudActor3D> ParentHudActor;
    
public:
    UHudAmbientMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAmbientMovementStartPosition(FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    void ResetAmbientMovementPosition(int32 ResetNumber, bool AllPlayersDead);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetAmbientRelativeHudActorTransform();
    
};

