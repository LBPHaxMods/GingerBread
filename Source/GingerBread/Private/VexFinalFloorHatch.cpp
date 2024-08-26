#include "VexFinalFloorHatch.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

AVexFinalFloorHatch::AVexFinalFloorHatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->MovingPlatform = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MovingPlatform"));
    this->HatchPiece1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HatchPiece1"));
    this->HatchPiece2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HatchPiece2"));
    this->HatchPiece3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HatchPiece3"));
    this->HatchPiece4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HatchPiece4"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->HatchPieceRetractDistance = 7.00f;
    this->OpenCloseCurve = NULL;
    this->OpenCloseDuration = 0.50f;
    this->LiftDepth = 12.00f;
    this->LiftDropCurve = NULL;
    this->LiftDropDuration = 0.50f;
    this->MovingPlatform->SetupAttachment(RootComponent);
    this->HatchPiece1->SetupAttachment(RootComponent);
    this->HatchPiece2->SetupAttachment(RootComponent);
    this->HatchPiece3->SetupAttachment(RootComponent);
    this->HatchPiece4->SetupAttachment(RootComponent);
}

void AVexFinalFloorHatch::ToggleHatch() {
}

void AVexFinalFloorHatch::OpenHatches() {
}



void AVexFinalFloorHatch::LiftPlatforms() {
}

void AVexFinalFloorHatch::DropPlatforms() {
}

void AVexFinalFloorHatch::CloseHatches() {
}

void AVexFinalFloorHatch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexFinalFloorHatch, OpenServerData);
    DOREPLIFETIME(AVexFinalFloorHatch, LiftServerData);
}


