#include "PufferFishSpline.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "TriggerActorComponent.h"

APufferFishSpline::APufferFishSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->SplineFollowerLeader = NULL;
    this->TriggerComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerComponent"));
    this->ActorToSpawn = NULL;
    this->LoopedSpline = false;
    this->ContinuousActors = false;
    this->ReverseSplineDirection = false;
    this->FishRequireBanking = true;
    this->StartPreWarmed = false;
    this->ActorSections = 0;
    this->ActorsPerSection = 0;
    this->SectionSpacing = 15.00f;
    this->StartDelay = 0.00f;
    this->ActorSpeed = 10.00f;
    this->SplineLength = 0.00f;
    this->traversalTime = 0.00f;
    this->ActorSpacing = 0.00f;
    this->StartDistanceOffset = 0.00f;
    this->VirtualLengthExtension = 0.00f;
    this->NumberEnabled = 0;
    this->bHasStarted = false;
    this->SplineComponent->SetupAttachment(RootComponent);
    this->BillboardComponent->SetupAttachment(RootComponent);
}


