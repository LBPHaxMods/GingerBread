#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraPointOfInterest.h"
#include "MamapedeCameraTarget.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable)
class AMamapedeCameraTarget : public AActor, public ICameraPointOfInterest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MamapedeTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocusHeight;
    
    AMamapedeCameraTarget(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnCameraManagerAvailable(AActor* ManagerActor);
    

    // Fix for true pure virtual functions not being implemented
};

