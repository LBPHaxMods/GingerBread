#include "VexConveyor.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CSPHelperComponent.h"
#include "ConveyorBeltComponent.h"
#include "GameplayTagComponent.h"
#include "HitPointsModifierComponent.h"
#include "InteractionComponent.h"
#include "Net/UnrealNetwork.h"
#include "OverlapManagerComponent.h"

AVexConveyor::AVexConveyor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->ConveyorSpline = CreateDefaultSubobject<USplineComponent>(TEXT("ConveyorSpline"));
    this->StaticCollision = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticCollision"));
    this->GameplayTag = CreateDefaultSubobject<UGameplayTagComponent>(TEXT("GameplayTag"));
    this->Wheels = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Wheels"));
    this->EndGrills = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("EndGrills"));
    this->AkFlamePanel = CreateDefaultSubobject<UAkComponent>(TEXT("AkFlamePanel"));
    this->AKConveyorHaptics = CreateDefaultSubobject<UAkComponent>(TEXT("AKConveyorHaptics"));
    this->SplashVFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SplashVFX"));
    this->SideBeltLeft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SideBeltLeft"));
    this->SideBeltRight = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SideBeltRight"));
    this->EndWheelNear = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndWheelNear"));
    this->EndWheelFar = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndWheelFar"));
    this->ConveyorBelt = CreateDefaultSubobject<UConveyorBeltComponent>(TEXT("ConveyorBelt"));
    this->HitPointsModifier = CreateDefaultSubobject<UHitPointsModifierComponent>(TEXT("HitPointsModifier"));
    this->OverlapManager = CreateDefaultSubobject<UOverlapManagerComponent>(TEXT("OverlapManager"));
    this->Cylinder1_Interact = CreateDefaultSubobject<UInteractionComponent>(TEXT("Cylender1_Interact"));
    this->Cylinder2_Interact = CreateDefaultSubobject<UInteractionComponent>(TEXT("Cylender2_Interact"));
    this->Box_Interact = CreateDefaultSubobject<UInteractionComponent>(TEXT("Box_Interact"));
    this->SackboyDetector = CreateDefaultSubobject<UBoxComponent>(TEXT("SackboyDetector"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->GrillMode = EVexConveyorGrillMode::Invalid;
    this->IsReversed = false;
    this->IsFullOnFire = false;
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
    this->SplashVFXTemplate = NULL;
    this->SplashVFXEnabled = false;
    this->Rep_IsTickEnabled = false;
    this->VexConveyorController = NULL;
    this->SplashVFX->SetupAttachment(RootComponent);
    this->SideBeltLeft->SetupAttachment(RootComponent);
    this->SideBeltRight->SetupAttachment(RootComponent);
    this->EndWheelNear->SetupAttachment(RootComponent);
    this->EndWheelFar->SetupAttachment(RootComponent);
    this->Cylinder1_Interact->SetupAttachment(StaticCollision);
    this->Cylinder2_Interact->SetupAttachment(StaticCollision);
    this->Box_Interact->SetupAttachment(StaticCollision);
    this->SackboyDetector->SetupAttachment(StaticCollision);
    this->ConveyorSpline->SetupAttachment(RootComponent);
    this->StaticCollision->SetupAttachment(RootComponent);
    this->GameplayTag->SetupAttachment(StaticCollision);
    this->Wheels->SetupAttachment(RootComponent);
    this->EndGrills->SetupAttachment(RootComponent);
    this->AkFlamePanel->SetupAttachment(RootComponent);
    this->AKConveyorHaptics->SetupAttachment(RootComponent);
}

void AVexConveyor::TurnOnAllFlamePanels_Implementation() {
}

void AVexConveyor::TurnOffAllFlamePanels_Implementation() {
}

void AVexConveyor::TriggerFlamePanelPattern(const TArray<bool>& pattern) {
}

void AVexConveyor::SetBeltSpeed_Implementation(float beltSpeed) {
}

void AVexConveyor::PlayRaisingMoveEndVibration() {
}

void AVexConveyor::PlayRaisingMoveBeginVibration() {
}

void AVexConveyor::OnRep_SplashVFXTemplate() {
}

void AVexConveyor::OnRep_IsTickEnabled() {
}

void AVexConveyor::OnConveyorEndOverlapAnySackboy(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, ASackboy* OtherSackboy, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AVexConveyor::OnConveyorEndInteractAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void AVexConveyor::OnConveyorBeginOverlapAnySackboy(UOverlapManagerComponent* OverlapManagerComponent, UPrimitiveComponent* OverlappedComponent, ASackboy* OtherSackboy, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AVexConveyor::OnConveyorBeginInteractAnySackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

TArray<ASackboy*> AVexConveyor::GetSackboysOnBelt() const {
    return TArray<ASackboy*>();
}

int32 AVexConveyor::GetNumberOfFlamePanels_Implementation() {
    return 0;
}

void AVexConveyor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVexConveyor, ServerData);
    DOREPLIFETIME(AVexConveyor, SplashVFXTemplate);
    DOREPLIFETIME(AVexConveyor, SplashVFXEnabled);
    DOREPLIFETIME(AVexConveyor, Rep_IsTickEnabled);
    DOREPLIFETIME(AVexConveyor, FlamePanelServerData);
}


