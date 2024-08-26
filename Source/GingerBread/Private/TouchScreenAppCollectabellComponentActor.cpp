#include "TouchScreenAppCollectabellComponentActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

ATouchScreenAppCollectabellComponentActor::ATouchScreenAppCollectabellComponentActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interaction"));
    this->Interaction = (UInteractionComponent*)RootComponent;
    this->CollectableSMP = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CollectableSMP"));
    this->SpawnAndFadeInTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("SpawnAndFadeInTimeline"));
    this->ObjectTypeToSpawn = NULL;
    this->bHasMovement = false;
    this->MovementSpeed = 10.00f;
    this->FadeDurationOnCollect = 0.50f;
    this->Material_FadeIn = NULL;
    this->Material_FadeOut = NULL;
    this->SpawnHeight = 2.00f;
    this->EdgeTolerance = 0.00f;
    this->FadeFloatCurve = NULL;
    this->bCollected = false;
    this->CollectableSMP->SetupAttachment(RootComponent);
}

void ATouchScreenAppCollectabellComponentActor::SpawnCollectable(ASackboy* Sackboy) {
}

void ATouchScreenAppCollectabellComponentActor::OnSpawnedFadeInComplete() {
}

void ATouchScreenAppCollectabellComponentActor::OnRep_CurrentMovementDirection() {
}

void ATouchScreenAppCollectabellComponentActor::OnInteractionBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}




void ATouchScreenAppCollectabellComponentActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATouchScreenAppCollectabellComponentActor, Rep_CurrentMovementDirection);
    DOREPLIFETIME(ATouchScreenAppCollectabellComponentActor, bCollected);
}


