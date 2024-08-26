#include "SpikeyVinesGroup.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "CraftCutterTargetComponent.h"
#include "TriggerActorComponent.h"

ASpikeyVinesGroup::ASpikeyVinesGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));

    this->SceneRoot = (USceneComponent*)RootComponent;
    this->BoundingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundingBox"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->RowCount = 1;
    this->ColumnCount = 1;
    this->AreShortVines = false;
    this->CutType = ESpikeyVineGroupCutType::CutAll;
    this->HorizontalAlignment = ESpikeyVineHorizontalAlignment::Center;
    this->VerticalAlignment = ESpikeyVineVerticalAlignment::Center;
    this->SignpostTime = 0.50f;
    this->RegrowDelay = 3.50f;
    this->VineSpawnSpread = 10.00f;
    this->SpikeyVineToSpawn = NULL;
    this->SpikeyVineRandomMinZScale = 0.90f;
    this->SpikeyVineRandomMaxZScale = 1.20f;
    this->SpikeyVineRandomPitchAndYawMaxRange = 5.00f;
    this->ProxyVineMesh = NULL;
    this->ProxyShortVineMesh = NULL;
    this->ProxyVineMaterial = NULL;
    this->ShortVineCraftCutterZExtent = 5.00f;
    this->ShortVineCraftCutterZOffset = 5.00f;
    this->TallVineCraftCutterZExtent = 10.00f;
    this->TallVineCraftCutterZOffset = 10.00f;
    this->VineGroupCutDown = NULL;
    this->VineGroupSignpost = NULL;
    this->VineGroupGrow = NULL;
    this->VineSingleCutDown = NULL;
    this->VineSingleSignpost = NULL;
    this->VineSingleGrow = NULL;
    this->BoundingBox->SetupAttachment(RootComponent);
    this->AkComponent->SetupAttachment(RootComponent);
    this->CraftCutterTarget->SetupAttachment(RootComponent);
}

void ASpikeyVinesGroup::TriggerCutDownOnAllSpikeyVines(ASpikeyVineSingle* SpikeyVine) {
}

void ASpikeyVinesGroup::SingleSignpostingAudio(ASpikeyVineSingle* SpikeyVine) {
}

void ASpikeyVinesGroup::SingleRegrowingAudio(ASpikeyVineSingle* SpikeyVine) {
}

void ASpikeyVinesGroup::SingleCutDownAudio(ASpikeyVineSingle* SpikeyVine) {
}

void ASpikeyVinesGroup::InvokeOnGroupAnyVineCut(ASpikeyVineSingle* SpikeyVine) {
}

void ASpikeyVinesGroup::GroupSignpostingAudio(ASpikeyVineSingle* SpikeyVine) {
}

void ASpikeyVinesGroup::GroupRegrowingAudio(ASpikeyVineSingle* SpikeyVine) {
}

void ASpikeyVinesGroup::GroupCutDownAudio(ASpikeyVineSingle* SpikeyVine) {
}


