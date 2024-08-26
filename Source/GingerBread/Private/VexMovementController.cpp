#include "VexMovementController.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

AVexMovementController::AVexMovementController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
}

bool AVexMovementController::RequestMoveLooping() {
    return false;
}

void AVexMovementController::MoveCompleted(EVexMovePoint ArrivedAtPoint) {
}

void AVexMovementController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexMovementController, ServerData);
    DOREPLIFETIME(AVexMovementController, MoveData_Server);
}


