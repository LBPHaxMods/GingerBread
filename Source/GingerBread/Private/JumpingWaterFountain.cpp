#include "JumpingWaterFountain.h"
#include "AkComponent.h"
#include "Components/BillboardComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "TriggerActorComponent.h"

AJumpingWaterFountain::AJumpingWaterFountain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->Billboard = (UBillboardComponent*)RootComponent;
    this->Candle1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Candle1"));
    this->Candle2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Candle2"));
    this->Candle1Cap = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Candle1Cap"));
    this->Candle2Cap = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Candle2Cap"));
    this->Candle1TopMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Candle1Top"));
    this->Candle2TopMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Candle2Top"));
    this->Candle1BottomMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Candle1Bottom"));
    this->Candle2BottomMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Candle2Bottom"));
    this->Candle1ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Shard1"));
    this->Candle2ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Shard2"));
    this->SplineMesh = CreateDefaultSubobject<USplineMeshComponent>(TEXT("SplineMesh"));
    this->AkFountainMovingAudio = CreateDefaultSubobject<UAkComponent>(TEXT("AkFountainMovingAudio"));
    this->MaterialStripes = NULL;
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->ThresholdTimeForParticleTrigger = 0.40f;
    this->DelayBetweenJumps = 0.10f;
    this->TimeMaterialParameterCurve = NULL;
    this->DynamicMaterialInstance = NULL;
    this->Candle1->SetupAttachment(RootComponent);
    this->Candle2->SetupAttachment(RootComponent);
    this->Candle1Cap->SetupAttachment(Candle1);
    this->Candle2Cap->SetupAttachment(Candle2);
    this->Candle1TopMesh->SetupAttachment(Candle1);
    this->Candle2TopMesh->SetupAttachment(Candle2);
    this->Candle1BottomMesh->SetupAttachment(Candle1);
    this->Candle2BottomMesh->SetupAttachment(Candle2);
    this->Candle1ParticleSystem->SetupAttachment(Candle1);
    this->Candle2ParticleSystem->SetupAttachment(Candle2);
    this->SplineMesh->SetupAttachment(RootComponent);
    this->AkFountainMovingAudio->SetupAttachment(RootComponent);
}


