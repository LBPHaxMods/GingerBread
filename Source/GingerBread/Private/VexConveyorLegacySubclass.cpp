#include "VexConveyorLegacySubclass.h"
#include "AkComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ConveyorBeltComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "OverlapManagerComponent.h"

AVexConveyorLegacySubclass::AVexConveyorLegacySubclass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->ConveyorSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ConveyorSpline"));
    this->StaticCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticCollision"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->Wheels = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Wheels"));
    this->EndGrills = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("EndGrills"));
    this->AkFlamePanel = CreateDefaultSubobject<UAkComponent>(TEXT("AkFlamePanel"));
    this->AKConveyorHaptics = CreateDefaultSubobject<UAkComponent>(TEXT("AKConveyorHaptics"));
    this->SideBeltLeft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SideBeltLeft"));
    this->SideBeltRight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SideBeltRight"));
    this->EndWheelNear = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndWheelNear"));
    this->EndWheelFar = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndWheelFar"));
    this->ConveyorBelt = CreateDefaultSubobject<UConveyorBeltComponent>(TEXT("ConveyorBelt"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->OverlapManager = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManager"));
    this->GrillMode = EVexConveyorLegacyGrillMode::Invalid;
    this->NumberOfPanels = 18;
    this->RedPanelMesh = NULL;
    this->BluePanelMesh = NULL;
    this->ForwardAxis = ESplineMeshAxis::X;
    this->TangentScale = 1.00f;
    this->PanelBoundOffset = 1.00f;
    this->PanelOnTopEnterThreshold = 0.30f;
    this->PanelOnTopExitThreshold = 0.80f;
    this->FlamePanelRevealDuration = 1.00f;
    this->FlamePanelHideDuration = 0.50f;
    this->FlameAnticipationDuration = 1.50f;
    this->FlameHideDuration = 0.25f;
    this->WrapRevealPanelDuration = 0.50f;
    this->WrapRevealFlameInterpDuration = 1.00f;
    this->WrapHidePanelInterpDuration = 0.50f;
    this->WrapHideFlameInterpDuration = 0.50f;
    this->FlamePanelDamageHeight = 3.50f;
    this->VAPOSMap = NULL;
    this->FPS = 30.00f;
    this->SplinePoints.AddDefaulted(4);
    this->SplineTangents.AddDefaulted(4);
    this->CurrentDistance = 0.00f;
    this->ConveyorSpeed = 25.00f;
    this->SideTrimDMI = NULL;
    this->NumberOfWheels = 4;
    this->FlameJetOnAK = NULL;
    this->FlameJetOnAudioDuration = 0.25f;
    this->FlameJetOffAK = NULL;
    this->FlameJetReignite = NULL;
    this->TriggerReigniteAlpha = 0.72f;
    this->FlamePanelOpenAK = NULL;
    this->FlamePanelCloseAK = NULL;
    this->FlameJetOffAKHaptic = NULL;
    this->FlameJetReigniteHaptic = NULL;
    this->FlamePanelOpenAKHaptic = NULL;
    this->FlamePanelCloseAKHaptic = NULL;
    this->TravellorOverlapFeedback = NULL;
    this->TravellorOverlapHaptic = NULL;
    this->TravellorOverlapStopHaptic = NULL;
    this->TravellorMoveVibration = NULL;
    this->TravellorMoveHaptic = NULL;
    this->TravellorMoveHapticStopHaptic = NULL;
    this->TravellorStompVibration = NULL;
    this->TravellorStompHaptic = NULL;
    this->TravellorStompHapticStopHaptic = NULL;
    this->GameplayTag->SetupAttachment(StaticCollision);
    this->Wheels->SetupAttachment(RootComponent);
    this->EndGrills->SetupAttachment(RootComponent);
    this->AkFlamePanel->SetupAttachment(RootComponent);
    this->AKConveyorHaptics->SetupAttachment(RootComponent);
    this->SideBeltLeft->SetupAttachment(RootComponent);
    this->SideBeltRight->SetupAttachment(RootComponent);
    this->EndWheelNear->SetupAttachment(RootComponent);
    this->EndWheelFar->SetupAttachment(RootComponent);
    this->ConveyorSpline->SetupAttachment(RootComponent);
    this->StaticCollision->SetupAttachment(RootComponent);
}

void AVexConveyorLegacySubclass::PlayRaisingMoveEndVibration() {
}

void AVexConveyorLegacySubclass::PlayRaisingMoveBeginVibration() {
}

void AVexConveyorLegacySubclass::OnConveyorEndOverlapAnySackboy(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, ASackboy* OtherSackboy, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AVexConveyorLegacySubclass::OnConveyorBeginOverlapAnySackboy(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, ASackboy* OtherSackboy, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

TArray<ASackboy*> AVexConveyorLegacySubclass::GetSackboysOnBelt() const {
    return TArray<ASackboy*>();
}


