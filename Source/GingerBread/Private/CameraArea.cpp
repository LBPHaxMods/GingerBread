#include "CameraArea.h"
#include "Components/BillboardComponent.h"
#include "CameraAreaPostProcessSettingsComponent.h"
#include "Net/UnrealNetwork.h"

ACameraArea::ACameraArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->PostProcessSettingsComponent = CreateDefaultSubobject<UCameraAreaPostProcessSettingsComponent>(TEXT("PostProcessSettings"));
    this->bPostProcessSettingsHasBeenCopied = false;
    this->Enabled = true;
    this->AreaPriority = 0;
    this->DepthOfFieldBehaviour = EDepthOfFieldBehaviour::CalculatedDof;
    this->CalculatedDOFHighestPitch = 0.90f;
    this->CalculatedDOFLowestPitch = 0.40f;
    this->ContainPOIDOFRadius = 10.00f;
    this->PriorityBehaviour = EPriorityBehaviour::Default;
    this->AllowOffscreenTimeout = true;
    this->SearchForClosestCameraArea = true;
    this->ActingCameraEnabled = true;
    this->ActiveOnlyWithGloopedSackboys = false;
    this->AutoPopulateTuningVolumes = true;
    this->AutoPopulateConstraints = true;
    this->bDebugShowArea = false;
    this->bIsActiveArea = false;
    this->Billboard = (UBillboardComponent*)RootComponent;
    this->Behaviour = NULL;
}

void ACameraArea::SetPriority(int32 Priority) {
}

void ACameraArea::SetEnabled(bool NewEnabled) {
}

void ACameraArea::Register(AActor* ManagerActor) {
}

void ACameraArea::OnRep_ReplicatedPrioritySettings() {
}

void ACameraArea::OnLevelSettingsAvailable(AActor* ManagerActor) {
}

int32 ACameraArea::GetPriority() const {
    return 0;
}

bool ACameraArea::GetEnabled() const {
    return false;
}

void ACameraArea::CreateDefaultAreaCollider(bool create_constraint, FVector Size) {
}

void ACameraArea::ApplyBlueprintTransitionSettings(const FTransitionSettings& Settings) {
}

void ACameraArea::ApplyBlueprintCameraSettings(const FCameraSettings& Settings) {
}

void ACameraArea::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACameraArea, AUTH_SyncSettings);
}


