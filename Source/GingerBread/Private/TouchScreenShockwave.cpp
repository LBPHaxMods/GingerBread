#include "TouchScreenShockwave.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CSPTimelineComponent -FallbackName=CSPTimelineComponent
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "HitPointsModifierComponent.h"
#include "Net/UnrealNetwork.h"

ATouchScreenShockwave::ATouchScreenShockwave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));

    this->SceneRoot = (USceneComponent*)RootComponent;
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->NaomiSkullWaveParticleSys = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
    this->TimelineComponent = CreateDefaultSubobject<UTimelineComponent>(TEXT("Timeline"));
    this->CollisionMeshToSpawn = NULL;
    this->WaveMovementCurve = NULL;
    this->NumberOfSides = 10;
    this->StartDistance = 8.00f;
    this->DistanceMultiplierWidth = 0.50f;
    this->AddedWidth = 0.81f;
    this->CollisionDistanceOffset = 0.00f;
    this->Thickness = 1.75f;
    this->Height = 0.50f;
    this->MoveDuration = 5.00f;
    this->bDontShowCollision = true;
    this->EndDistance = 250.00f;
    this->SkullWaveParentMat = NULL;
    this->SkullWaveRingParentMat = NULL;
    this->TouchScreen = NULL;
    this->AddedRotation = -150.00f;
    this->TranslucentPriority = 0;
    this->NaomiSkullWaveParticleSys->SetupAttachment(RootComponent);
}

void ATouchScreenShockwave::UpdateTimeline(const float Value) {
}

void ATouchScreenShockwave::SetTouchScreen(ATouchScreen* NewTouchScreen) {
}

void ATouchScreenShockwave::OnTimelineFinished() {
}

void ATouchScreenShockwave::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATouchScreenShockwave, MoveDuration);
    DOREPLIFETIME(ATouchScreenShockwave, EndDistance);
    DOREPLIFETIME(ATouchScreenShockwave, TouchScreen);
    DOREPLIFETIME(ATouchScreenShockwave, AddedRotation);
}


