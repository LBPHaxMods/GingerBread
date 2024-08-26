#include "VexFinalTileManager.h"
#include "Components/SceneComponent.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

AVexFinalTileManager::AVexFinalTileManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->Vex = NULL;
    this->CheckpointOnString = NULL;
    this->NewGapCoords.AddDefaulted(2);
    this->ShuffleStartDelay = 1.00f;
    this->ShuffleSignpostDuration = 1.50f;
    this->ShuffleMovementDuration = 1.00f;
    this->ShuffleSignpostShakeSoundTimes.AddDefaulted(5);
    this->ShuffleSignpostCurve = NULL;
    this->ShuffleMovementCurve = NULL;
}

void AVexFinalTileManager::StartFloatyWobbles() {
}

void AVexFinalTileManager::OnRep_VexTiles() {
}

bool AVexFinalTileManager::IsShuffling() const {
    return false;
}

TArray<FVector> AVexFinalTileManager::GetGapLocations() {
    return TArray<FVector>();
}

void AVexFinalTileManager::DoShuffle() {
}

void AVexFinalTileManager::CreateGaps() {
}

void AVexFinalTileManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexFinalTileManager, VexTiles);
    DOREPLIFETIME(AVexFinalTileManager, ServerData);
    DOREPLIFETIME(AVexFinalTileManager, ServerParameters);
}


