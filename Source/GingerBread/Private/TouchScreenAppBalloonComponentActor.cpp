#include "TouchScreenAppBalloonComponentActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"

ATouchScreenAppBalloonComponentActor::ATouchScreenAppBalloonComponentActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("Interaction"));
    this->Interaction = (UInteractionComponent*)RootComponent;
    this->BalloonSMP = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BalloonSMP"));
    this->SpawnAndFadeInTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("SpawnAndFadeInTimeline"));
    this->CollectableClass = NULL;
    this->Material_Idle = NULL;
    this->Material_FadeIn = NULL;
    this->Material_FadeOut = NULL;
    this->Material_Bounce = NULL;
    this->Material_Pop = NULL;
    this->BalloonPopTime = 1.00f;
    this->TranslucentSortPriority = -1;
    this->MovementSpeed = 1.00f;
    this->EdgeTolerance = 0.00f;
    this->FadeFloatCurve = NULL;
    this->BalloonAppearEvent = NULL;
    this->BalloonCollectedEvent = NULL;
    this->BounceEffectToIdleDelay = 0.50f;
    this->bCollected = false;
    this->BalloonSMP->SetupAttachment(RootComponent);
}

void ATouchScreenAppBalloonComponentActor::ResetToIdleMaterial() {
}

void ATouchScreenAppBalloonComponentActor::PlayPopVfx_Implementation() {
}


void ATouchScreenAppBalloonComponentActor::OnSpawnedFadeInComplete() {
}

void ATouchScreenAppBalloonComponentActor::OnRep_CurrentMovementDirection() {
}

void ATouchScreenAppBalloonComponentActor::OnRep_bCollected() {
}

void ATouchScreenAppBalloonComponentActor::OnInteractionBegin(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp) {
}



void ATouchScreenAppBalloonComponentActor::DestroyBalloon() {
}


void ATouchScreenAppBalloonComponentActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATouchScreenAppBalloonComponentActor, Colour);
    DOREPLIFETIME(ATouchScreenAppBalloonComponentActor, Rep_CurrentMovementDirection);
    DOREPLIFETIME(ATouchScreenAppBalloonComponentActor, bCollected);
}


