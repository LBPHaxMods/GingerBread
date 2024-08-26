#include "TouchScreenAppSliderBaseComponent.h"
#include "Net/UnrealNetwork.h"

UTouchScreenAppSliderBaseComponent::UTouchScreenAppSliderBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Spline = NULL;
    this->SliderClass = NULL;
    this->DebugSlider = NULL;
    this->bAllowSideWaysMovement = false;
    this->SidewaysTrackClamp = 0.50f;
    this->bDeactivateOnUnlock = false;
    this->UnlockTransitionOutTime = 0.50f;
    this->Slider_Width = 12.00f;
    this->ActivateSound = NULL;
    this->DeactivateSound = NULL;
    this->SliderSound = NULL;
    this->CompletedSound = NULL;
    this->CompletedHaptic = NULL;
    this->SliderHapticTouch = NULL;
    this->SliderHapticUntouch = NULL;
    this->SliderHapticMoveStartLoop = NULL;
    this->SliderHapticMoveStopLoop = NULL;
    this->CompletedGamepadAudio = NULL;
    this->SliderGamepadAudioMoveStart = NULL;
    this->SliderGamepadAudioMoveStop = NULL;
    this->SliderGamepadAudioTouch = NULL;
    this->SliderGamepadAudioUntouch = NULL;
    this->HandleSortPriority = -2;
    this->Material_Handle_FadeIn = NULL;
    this->Material_Handle_FadeOut = NULL;
    this->Material_Handle_OnOverlap = NULL;
    this->Material_Handle_OnNoOverlap = NULL;
    this->ProceduralStaticMeshComponent = NULL;
    this->ReturnSpeed = 3.00f;
    this->NumberOfSplinePoints = 0;
    this->SplineLength = 0.00f;
}


void UTouchScreenAppSliderBaseComponent::OnSliderOverlap(UTouchScreenAppSliderComponent* Slider, ASackboy* Sackboy) {
}

void UTouchScreenAppSliderBaseComponent::OnSliderHandledEnd(UTouchScreenAppSliderComponent* Slider, ASackboy* Sackboy) {
}


void UTouchScreenAppSliderBaseComponent::OnRep_Sliders() {
}

float UTouchScreenAppSliderBaseComponent::GetZOffset() const {
    return 0.0f;
}

UMaterialInstanceDynamic* UTouchScreenAppSliderBaseComponent::GetDynamicMaterial(TEnumAsByte<ETouchSliderMaterialIndex::Type> Index) const {
    return NULL;
}

void UTouchScreenAppSliderBaseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTouchScreenAppSliderBaseComponent, Sliders);
}


