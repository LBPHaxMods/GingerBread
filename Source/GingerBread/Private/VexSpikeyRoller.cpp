#include "VexSpikeyRoller.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

AVexSpikeyRoller::AVexSpikeyRoller(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->LeftEndPiece = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftEndPiece"));
    this->LeftCylinderPiece = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftCylinderPiece"));
    this->MiddleCylinderPiece = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MiddleCylinderPiece"));
    this->RightCylinderPiece = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightCylinderPiece"));
    this->RightEndPiece = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightEndPiece"));
    this->AKSpikeyRoller = CreateDefaultSubobject<UAkComponent>(TEXT("AKSpikeyRoller"));
    this->ForceTargetPos = false;
    this->ThrowArc = 0.50f;
    this->AtTargetTolerance = 1.00f;
    this->RealSpikeyRollerActorClass = NULL;
    this->LeftEndPiece->SetupAttachment(RootComponent);
    this->LeftCylinderPiece->SetupAttachment(RootComponent);
    this->MiddleCylinderPiece->SetupAttachment(RootComponent);
    this->RightCylinderPiece->SetupAttachment(RootComponent);
    this->RightEndPiece->SetupAttachment(RootComponent);
    this->AKSpikeyRoller->SetupAttachment(RootComponent);
}




