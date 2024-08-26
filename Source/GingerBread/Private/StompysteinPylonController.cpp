#include "StompysteinPylonController.h"
#include "Components/SceneComponent.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

AStompysteinPylonController::AStompysteinPylonController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->RoatingPlatform1 = NULL;
    this->RoatingPlatform2 = NULL;
    this->SpinOneWaySpeedCurve = NULL;
    this->SpinTwoWaySpeedCurve = NULL;
    this->SpinTwoWayCurveDuration = 1.75f;
    this->SpinTwoWayReverseDirectionTimeMin = 5.80f;
    this->SpinTwoWayReverseDirectionTimeMax = 7.80f;
}





float AStompysteinPylonController::GetCurrentSpeed() const {
    return 0.0f;
}

void AStompysteinPylonController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStompysteinPylonController, ServerState);
}


