#include "PhotoBooth.h"
#include "Components/ArrowComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "InteractionComponent.h"
#include "TriggerActorComponent.h"

APhotoBooth::APhotoBooth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    this->SphereInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("SphereInteraction"));
    this->SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollider"));
    this->PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    this->Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->CaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CaptureComponent"));
    this->TriggerActorComp = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComp"));
    this->StoolMoverTool = NULL;
    this->EnterHapticsEvent = NULL;
    this->FlashHapticsEvent = NULL;
    this->ChargeAkEvent = NULL;
    this->FlashAkEvent = NULL;
    this->PhotoMaterial = NULL;
    this->CountDownDuration = 0.35f;
    this->FlashDuration = 0.10f;
    this->FlashIntensity = 10.00f;
    this->CaptureFOV = 25.00f;
    this->SphereInteraction->SetupAttachment(RootComponent);
    this->SphereCollider->SetupAttachment(RootComponent);
    this->PointLight->SetupAttachment(RootComponent);
    this->Arrow->SetupAttachment(RootComponent);
    this->CaptureComponent->SetupAttachment(Arrow);
}

void APhotoBooth::OnSplineFollowerCallback(USplineFollowerComponent* pSplineFollowerComponent, const bool MoveForwards) {
}


