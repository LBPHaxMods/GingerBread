#include "MoverTool2.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AMoverTool2::AMoverTool2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->StartFwdMovementHapticEvent = NULL;
    this->StopFwdMovementHapticEvent = NULL;
    this->StartBackMovementHapticEvent = NULL;
    this->StopBackMovementHapticEvent = NULL;
    this->bInitialised = false;
    this->Usage = EMoverToolUsage::Default;
    this->AkHapticsMoverToolComponent = NULL;
}

void AMoverTool2::UpdateMoverTool() {
}

void AMoverTool2::StopMotionCallback() {
}

void AMoverTool2::StartMotionCallback() {
}

void AMoverTool2::PlayHapticEvent(UAkAudioEvent* InHapticEvent) {
}

void AMoverTool2::OnSplineReachedEndPosition(USplineFollowerComponent* SplineFollower, bool WasTravellingForward) {
}

void AMoverTool2::OnRep_Initialised() {
}

bool AMoverTool2::HasAuthorityOrLocal() const {
    return false;
}

void AMoverTool2::FixupRotations(FRotator& startOrientation, FRotator& endOrientation, bool& forceShortest) {
}

void AMoverTool2::CopyPropertiesToCode(bool updateRTPC, bool debugSrcPos, EMoverTypes movementProp, const FString& movementRTPC, const FString& deltaMovementRTPC, float SplineLength, bool loopedMotion) {
}

void AMoverTool2::ClearMoverToolEvents() {
}

void AMoverTool2::AddMoverToolEventToCode(float Position, uint8 Direction, UForceFeedbackEffect* Rumble, TSubclassOf<UCameraShake> CameraShake, UAkAudioEvent* Audio, UAkAudioEvent* Haptic) {
}

void AMoverTool2::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMoverTool2, bInitialised);
}


