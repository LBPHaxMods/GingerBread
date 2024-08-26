#include "BetterLuckGameshow.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "CSPHelperComponent.h"

ABetterLuckGameshow::ABetterLuckGameshow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->VexHead = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VexHead"));
    this->Backboard = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Backboard"));
    this->SpinningWheel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpinningWheel"));
    this->Ticker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ticker"));
    this->Hatch = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hatch"));
    this->HatchRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HatchRoot"));
    this->HatchMovementTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("HatchMovementTimeline"));
    this->CSPHelperComponent = CreateDefaultSubobject<UCSPHelperComponent>(TEXT("CSPHelperComponent"));
    this->MainMontage = NULL;
    this->Montage1 = NULL;
    this->Montage2 = NULL;
    this->HatchOpenCurve = NULL;
    this->HatchCloseCurve = NULL;
    this->Spin3VO2Delay = 5.00f;
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->VexHead->SetupAttachment(SkeletalMesh);
    this->Backboard->SetupAttachment(RootComponent);
    this->SpinningWheel->SetupAttachment(SkeletalMesh);
    this->Ticker->SetupAttachment(SkeletalMesh);
    this->Hatch->SetupAttachment(HatchRoot);
    this->HatchRoot->SetupAttachment(RootComponent);
}

void ABetterLuckGameshow::OnVexMontageNotify(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

void ABetterLuckGameshow::OnVexMontageEnd(UAnimMontage* AnimMontage, bool bInterrupted) {
}

void ABetterLuckGameshow::OnNetworkEvent(uint32 Stage, FName EventName) {
}

void ABetterLuckGameshow::OnMontageNotify(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload) {
}

void ABetterLuckGameshow::OnHatchTimelineUpdate(const float Rotation) {
}


