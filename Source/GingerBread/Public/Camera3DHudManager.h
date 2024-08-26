#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "CustomHudAmbientMovement.h"
#include "Camera3DHudManager.generated.h"

class AGingerbreadHUD;
class APlayerCameraManager;
class USceneComponent;

UCLASS(Blueprintable)
class ACamera3DHudManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearPlaneOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LastCameraTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* PlayerCameraManager;
    
public:
    ACamera3DHudManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAmbientMovementEnabledGlobally(bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTickHUD_BlueprintCall(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    AGingerbreadHUD* GetOwnerHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHudActorDistanceFromCamera() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetBoundsComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetAttachToComponent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAmbientMovementEnabledGlobally() const;
    
    UFUNCTION(BlueprintCallable)
    void AddAmbientMovementDelta(FCustomHudAmbientMovement AmbientTransform);
    
};

