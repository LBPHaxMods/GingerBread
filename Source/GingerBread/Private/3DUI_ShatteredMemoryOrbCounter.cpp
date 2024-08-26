#include "3DUI_ShatteredMemoryOrbCounter.h"
#include "Components/ChildActorComponent.h"
#include "Components/TimelineComponent.h"
#include "GingerbreadWidgetComponent.h"
#include "HudStaticMeshComponent.h"

A3DUI_ShatteredMemoryOrbCounter::A3DUI_ShatteredMemoryOrbCounter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TextChildActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("TextChildActor"));
    this->ShatteredOrbMesh = CreateDefaultSubobject<UHudStaticMeshComponent>(TEXT("ShatteredOrbMesh"));
    this->GingerbreadWidget = CreateDefaultSubobject<UGingerbreadWidgetComponent>(TEXT("GingerbreadWidget"));
    this->OrbScaleTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("OrbScaleTimeline"));
    this->OrbShowTime = 4.50f;
    this->OrbScaleCurve = NULL;
    this->TextChildActor->SetupAttachment(RootComponent);
    this->ShatteredOrbMesh->SetupAttachment(RootComponent);
    this->GingerbreadWidget->SetupAttachment(RootComponent);
}

void A3DUI_ShatteredMemoryOrbCounter::Show(FVector WorldLocation, int32 CurrentCount, int32 TotalCount, APawn* Sackboy) {
}

void A3DUI_ShatteredMemoryOrbCounter::OnOrbScaleUpdate(float Alpha) {
}

void A3DUI_ShatteredMemoryOrbCounter::OnOrbScaleFinished() {
}


