#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AreaView.h"
#include "CameraDOFSettings.h"
#include "CameraEventDelegate.h"
#include "ECameraSettingsType.h"
#include "FocusSettings.h"
#include "GingerbreadCamera.h"
#include "JetpackSettings.h"
#include "SingleScreenCamera.generated.h"

class AActor;
class ACameraArea;
class ACameraColliderActor;
class ASackboy;
class UCameraBehaviour;
class UCameraComponent;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class GINGERBREAD_API ASingleScreenCamera : public AGingerbreadCamera {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraEvent OnInitialCameraSettingsReady;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ASackboy* AUTH_CurrentLeader;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraArea* LastArea;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraColliderActor* LastAreaCollider;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SnapToFocus;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAreaView LastView;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAreaView CurrentView;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAreaView ActingView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraBehaviour* ActingCameraBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusSettings GameplayFocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusSettings CameraModifiersFocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusSettings ActingFocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusSettings DebugCloseupFocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusSettings KillCameraFocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusSettings JetpackCameraFocusSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusSettings Final;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InitialCameraSettings, meta=(AllowPrivateAccess=true))
    FFocusSettings AUTH_InitialCameraSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugCamAreaInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugCamInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugDynamicKillEdgeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugAudioListenerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugCamGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionDebugDisplayTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerDeadzone;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fBlendWeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Debug_WorldAverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJetpackSettings JetpackCameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanAdjustSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomAdjustSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSmoothFocusDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothFocusInterpSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraDOFSettings ActingCameraDOFSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraDOFSettings KillCameraDOFSettings;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* CameraMaterialParameterCollection;
    
public:
    ASingleScreenCamera(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InitialCameraSettings();
    
    UFUNCTION(BlueprintCallable)
    void OnCameraManagerAvailable(AActor* ManagerActor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetInitialCameraSettings(const FFocusSettings& FocusSettings);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraInTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInitialCameraSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASackboy* GetHighestPriorityPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFocusSettings GetFocusSettings(ECameraSettingsType CameraSettingsType) const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcVerticalFOVDegrees(float horizontal_fov_degrees) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcHorizontalFOVDegrees(float vertical_fov_degrees) const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateCamera(float BlendTimeSeconds);
    
};

