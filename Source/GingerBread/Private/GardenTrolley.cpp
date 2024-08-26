#include "GardenTrolley.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Net/UnrealNetwork.h"
#include "RotatorComponent.h"
#include "TriggerActorComponent.h"

AGardenTrolley::AGardenTrolley(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));

    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->TrollyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TrollyMesh"));
    this->PlatformCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformCollision"));
    this->ParrotSyntheticOrnament_SM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ParrotSyntheticOrnament_SM"));
    this->TrolleyCarpetWalkable_SM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TrolleyCarpetWalkable_SM"));
    this->BackCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BackCollision"));
    this->AMZ_Sticker_chair_SM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_chair_SM"));
    this->Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->AMZ_Sticker_Bird_SM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_Bird_SM"));
    this->AMZ_Sticker_glasses_SM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_glasses_SM"));
    this->AMZ_Sticker_chair_SM2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_chair_SM2"));
    this->AMZ_Sticker_chair_SM1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_chair_SM1"));
    this->AMZ_Sticker_suitcases01_SM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_suitcases01_SM"));
    this->AMZ_Sticker_suitcases04_SM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_suitcases04_SM"));
    this->AMZ_Sticker_Plane15_SM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_Plane15_SM"));
    this->AMZ_Sticker_Plane15_SM4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_Plane15_SM4"));
    this->AMZ_Sticker_Plane15_SM3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_Plane15_SM3"));
    this->AMZ_Sticker_Plane15_SM2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_Plane15_SM2"));
    this->AMZ_Sticker_Plane15_SM1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_Plane15_SM1"));
    this->AMZ_Sticker_Plane15_SM7 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_Plane15_SM7"));
    this->AMZ_Sticker_Plane15_SM6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_Plane15_SM6"));
    this->AMZ_Sticker_Plane15_SM5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_Plane15_SM5"));
    this->StaticMesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh1"));
    this->BagRoot = CreateDefaultSubobject<USceneComponent>(TEXT("BagRoot"));
    this->AMZ_Sticker_suitcases03_SM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("AMZ_Sticker_suitcases03_SM"));
    this->Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
    this->Cube1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube1"));
    this->TrolleyPlaneA_PS_SM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TrolleyPlaneA_PS_SM"));
    this->PropellerPivotComponent = CreateDefaultSubobject<USceneComponent>(TEXT("PropellerPivotComponent"));
    this->TrolleyPlanePropeller_SM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TrolleyPlanePropeller_SM"));
    this->Cube3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube3"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->StaticMesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh2"));
    this->Cube2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube2"));
    this->Wheel01 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wheel01"));
    this->Wheel02 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wheel02"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->Rotator = CreateDefaultSubobject<URotatorComponent>(TEXT("Rotator"));
    this->TrollyTilt = CreateDefaultSubobject<UTimelineComponent>(TEXT("TrollyTilt"));
    this->Timeline_0 = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline_0"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->TrolleyTiltTimelineCurve = NULL;
    this->BirdStickerTimelineCurve = NULL;
    this->SuitcaseTimelineCurve = NULL;
    this->SafetyLightsStaticMesh = NULL;
    this->TrolleyTiltAkEvent = NULL;
    this->ParrotFallAkEvent = NULL;
    this->TrolleyTiltHapticsEvent = NULL;
    this->ParrotFallHapticsEvent = NULL;
    this->TiltValue = 0.00f;
    this->bHasBeenTilted = false;
    this->AMZ_Sticker_Bird_SM->SetupAttachment(Scene);
    this->AMZ_Sticker_glasses_SM->SetupAttachment(AMZ_Sticker_Bird_SM);
    this->AMZ_Sticker_chair_SM2->SetupAttachment(TrollyMesh);
    this->AMZ_Sticker_chair_SM1->SetupAttachment(TrollyMesh);
    this->AMZ_Sticker_suitcases01_SM->SetupAttachment(TrollyMesh);
    this->AMZ_Sticker_suitcases04_SM->SetupAttachment(TrollyMesh);
    this->AMZ_Sticker_Plane15_SM->SetupAttachment(TrollyMesh);
    this->AMZ_Sticker_Plane15_SM4->SetupAttachment(TrollyMesh);
    this->AMZ_Sticker_Plane15_SM3->SetupAttachment(TrollyMesh);
    this->AMZ_Sticker_Plane15_SM2->SetupAttachment(TrollyMesh);
    this->AMZ_Sticker_Plane15_SM1->SetupAttachment(TrollyMesh);
    this->AMZ_Sticker_Plane15_SM7->SetupAttachment(TrollyMesh);
    this->AMZ_Sticker_Plane15_SM6->SetupAttachment(TrollyMesh);
    this->AMZ_Sticker_Plane15_SM5->SetupAttachment(TrollyMesh);
    this->StaticMesh1->SetupAttachment(TrollyMesh);
    this->BagRoot->SetupAttachment(TrollyMesh);
    this->AMZ_Sticker_suitcases03_SM->SetupAttachment(BagRoot);
    this->Cube->SetupAttachment(TrollyMesh);
    this->Cube1->SetupAttachment(TrollyMesh);
    this->TrolleyPlaneA_PS_SM->SetupAttachment(TrollyMesh);
    this->PropellerPivotComponent->SetupAttachment(TrolleyPlaneA_PS_SM);
    this->TrolleyPlanePropeller_SM->SetupAttachment(PropellerPivotComponent);
    this->Cube3->SetupAttachment(TrollyMesh);
    this->StaticMesh->SetupAttachment(TrollyMesh);
    this->StaticMesh2->SetupAttachment(TrollyMesh);
    this->Cube2->SetupAttachment(TrollyMesh);
    this->Wheel01->SetupAttachment(RootComponent);
    this->Wheel02->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->TrollyMesh->SetupAttachment(RootComponent);
    this->PlatformCollision->SetupAttachment(TrollyMesh);
    this->ParrotSyntheticOrnament_SM->SetupAttachment(TrollyMesh);
    this->TrolleyCarpetWalkable_SM->SetupAttachment(TrollyMesh);
    this->BackCollision->SetupAttachment(TrollyMesh);
    this->AMZ_Sticker_chair_SM->SetupAttachment(TrollyMesh);
    this->Scene->SetupAttachment(AMZ_Sticker_chair_SM);
}

void AGardenTrolley::OnTrolleyTiltUpdate(const float TiltAlpha) {
}

void AGardenTrolley::OnTrolleyTiltParrotFall() {
}

void AGardenTrolley::OnSuitcaseUpdate(const float SuitcaseAlpha) {
}

void AGardenTrolley::OnRep_HasBeenTilted() {
}

void AGardenTrolley::OnBirdStickerUpdate(const float BirdStickerAlpha) {
}

void AGardenTrolley::OnBirdAndSuitcaseTimelineFinished() {
}

void AGardenTrolley::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGardenTrolley, bHasBeenTilted);
}


