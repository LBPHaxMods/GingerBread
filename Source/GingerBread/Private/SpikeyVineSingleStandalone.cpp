#include "SpikeyVineSingleStandalone.h"
#include "CraftCutterTargetComponent.h"
#include "TriggerActorComponent.h"

ASpikeyVineSingleStandalone::ASpikeyVineSingleStandalone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CraftCutterTarget = CreateDefaultSubobject<UCraftCutterTargetComponent>(TEXT("CraftCutterTarget"));
    this->TriggerActor = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActor"));
    this->CanEverHaveCraftCutterEnabled = true;
    this->CraftCutterHorizontalExtent = 10.00f;
    this->ShortVineCraftCutterZExtent = 5.00f;
    this->ShortVineCraftCutterZOffset = 5.00f;
    this->TallVineCraftCutterZExtent = 10.00f;
    this->TallVineCraftCutterZOffset = 10.00f;
    this->CraftCutterTarget->SetupAttachment(RootComponent);
}


