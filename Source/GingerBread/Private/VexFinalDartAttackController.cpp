#include "VexFinalDartAttackController.h"
#include "Components/SceneComponent.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

AVexFinalDartAttackController::AVexFinalDartAttackController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->CSPComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSP Component"));
    this->Vex = NULL;
    this->ClosingTime = 1.00f;
    this->OpeningTime = 1.00f;
    this->ClosedHatchHeight = -8.00f;
    this->OpenHatchHeight = 7.00f;
    this->RowByRow = false;
    this->NumberOfRows = 2;
    this->NumberOfDartsPerRow = 5;
    this->DelayBetweenShotsRowByRow = 2.00f;
    this->NumberOfRowCycles = 2;
    this->DelayBetweenShotsOneByOne = 1.00f;
    this->PostFireDelayRowByRow = 3.00f;
    this->PostFireDelayOneByOne = 2.00f;
    this->ShotIntervalRowByRow = 0.25f;
    this->AreTrapsVisible = false;
}

void AVexFinalDartAttackController::OnVexDefeated() {
}

float AVexFinalDartAttackController::GetShotInterval() const {
    return 0.0f;
}

void AVexFinalDartAttackController::CSPEvent(uint32 Event) {
}

void AVexFinalDartAttackController::Activate() {
}

void AVexFinalDartAttackController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexFinalDartAttackController, DartTraps);
    DOREPLIFETIME(AVexFinalDartAttackController, AreTrapsVisible);
}


