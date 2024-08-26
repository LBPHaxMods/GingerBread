#include "SingleScreenCamera.h"
#include "Camera/CameraComponent.h"
#include "CameraBehaviour.h"
#include "Net/UnrealNetwork.h"

ASingleScreenCamera::ASingleScreenCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->AUTH_CurrentLeader = NULL;
    this->LastArea = NULL;
    this->LastAreaCollider = NULL;
    this->SnapToFocus = false;
    this->ActingCameraBehaviour = CreateDefaultSubobject<UCameraBehaviour>(TEXT("ActingCameraBehaviour"));
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->bShowDebugCamAreaInfo = false;
    this->bShowDebugCamInfo = false;
    this->bShowDebugDynamicKillEdgeInfo = false;
    this->bShowDebugAudioListenerInfo = false;
    this->bShowDebugCamGraphs = false;
    this->TransitionDebugDisplayTime = 10.00f;
    this->ControllerDeadzone = 0.20f;
    this->fBlendWeight = 1.00f;
    this->PanAdjustSpeed = 20.00f;
    this->ZoomAdjustSpeed = 20.00f;
    this->bEnableSmoothFocusDistance = false;
    this->SmoothFocusInterpSpeed = 1.00f;
    this->CameraMaterialParameterCollection = NULL;
}

void ASingleScreenCamera::OnRep_InitialCameraSettings() {
}

void ASingleScreenCamera::OnCameraManagerAvailable(AActor* ManagerActor) {
}

void ASingleScreenCamera::Multicast_SetInitialCameraSettings_Implementation(const FFocusSettings& FocusSettings) {
}

bool ASingleScreenCamera::IsCameraInTransition() const {
    return false;
}

bool ASingleScreenCamera::HasInitialCameraSettings() const {
    return false;
}

ASackboy* ASingleScreenCamera::GetHighestPriorityPlayer() const {
    return NULL;
}

FFocusSettings ASingleScreenCamera::GetFocusSettings(ECameraSettingsType CameraSettingsType) const {
    return FFocusSettings{};
}

void ASingleScreenCamera::DeactivateCamera() {
}

float ASingleScreenCamera::CalcVerticalFOVDegrees(float horizontal_fov_degrees) const {
    return 0.0f;
}

float ASingleScreenCamera::CalcHorizontalFOVDegrees(float vertical_fov_degrees) const {
    return 0.0f;
}

void ASingleScreenCamera::ActivateCamera(float BlendTimeSeconds) {
}

void ASingleScreenCamera::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASingleScreenCamera, AUTH_CurrentLeader);
    DOREPLIFETIME(ASingleScreenCamera, AUTH_InitialCameraSettings);
}


