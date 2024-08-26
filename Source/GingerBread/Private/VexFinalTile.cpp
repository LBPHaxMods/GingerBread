#include "VexFinalTile.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CSPHelperComponent.h"
#include "Net/UnrealNetwork.h"

AVexFinalTile::AVexFinalTile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->TileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TileMesh"));
    this->TilePipesMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TilePipesMesh"));
    this->DestructionMesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DestructionMesh1"));
    this->DestructionMesh2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DestructionMesh2"));
    this->DestructionMesh3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DestructionMesh4"));
    this->DestructionMesh4 = NULL;
    this->CrumplerDetectionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CrumplerDetectionBox"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->NormalTileMeshLightMaterialIndex = 8;
    this->HatchTileMeshLightMaterialIndex = 7;
    this->FloorBreakWobbleCurve = NULL;
    this->FloorBreakWobbleDuration = 2.00f;
    this->FloorBreakPieceWobbleOffsetTime = 0.17f;
    this->FloorBreakWobbleOffset = -1.00f;
    this->FloorBreakPieceDropTimes.AddDefaulted(4);
    this->FloorBreakCollapseSoundTime = 0.71f;
    this->PostFloorBreakDestroyTime = 1.70f;
    this->FloatyWobbleCurve = NULL;
    this->FloatyWobbleMinDuration = 2.00f;
    this->FloatyWobbleMaxDuration = 2.50f;
    this->FloatyWobbleMinStartTime = 0.00f;
    this->FloatyWobbleMaxStartTime = 0.75f;
    this->FloatyWobbleOffset = 0.70f;
    this->IsDestructable = false;
    this->ContainsFloorHatch = false;
    this->TilePipeMeshVariant = 0;
    this->ParticleSystemEnabled = false;
    this->TileGlowEnabled = false;
    this->TileMesh->SetupAttachment(RootComponent);
    this->TilePipesMesh->SetupAttachment(RootComponent);
    this->DestructionMesh1->SetupAttachment(RootComponent);
    this->DestructionMesh2->SetupAttachment(RootComponent);
    this->DestructionMesh3->SetupAttachment(RootComponent);
    this->CrumplerDetectionBox->SetupAttachment(RootComponent);
}

void AVexFinalTile::TriggerMovementWarningSound_Implementation() {
}

void AVexFinalTile::TriggerMovementSound_Implementation() {
}

void AVexFinalTile::StartFloatyWobble() {
}

void AVexFinalTile::SetUpFromConstructionScript() {
}






void AVexFinalTile::OnRep_TileGlowEnabled() {
}

void AVexFinalTile::OnRep_ParticleSystemEnabled() {
}


UMaterialInstanceDynamic* AVexFinalTile::GetDynamicLightMaterial() const {
    return NULL;
}

void AVexFinalTile::Break() {
}

void AVexFinalTile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexFinalTile, ServerData);
    DOREPLIFETIME(AVexFinalTile, ParticleSystemEnabled);
    DOREPLIFETIME(AVexFinalTile, TileGlowEnabled);
}


