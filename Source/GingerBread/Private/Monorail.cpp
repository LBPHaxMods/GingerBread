#include "Monorail.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "HitPointsModifierComponent.h"
#include "Net/UnrealNetwork.h"

AMonorail::AMonorail(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    this->Root = (USceneComponent*)RootComponent;
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->StartOffset = 0.00f;
    this->PlatformSpacing = 0.00f;
    this->RailSpeed = 80.00f;
    this->SplineMesh = NULL;
    this->MaxBlockGapVariancePercentage = 0.20f;
    this->bCanWalkOnTrack = false;
    this->VirtualLength = 0.00f;
    this->bCheckOverlaps = false;
    this->bActivated = false;
    this->Spline->SetupAttachment(RootComponent);
}

void AMonorail::OnRep_Activated() {
}

void AMonorail::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMonorail, bActivated);
}


