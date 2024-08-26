#include "LookAtEye.h"
#include "Components/ArrowComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"

ALookAtEye::ALookAtEye(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->MyRootComponent = (USceneComponent*)RootComponent;
    this->BillboardComp = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->ArrowComp = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->Activator = NULL;
    this->WatchClosestSackboy = true;
    this->ShowDebugArrow = true;
    this->ReturnHome = true;
    this->RotateSpeed = 10.00f;
    this->ReturnHomeSpeedMultiplier = 0.50f;
    this->TargetSwitchDelay = 1.00f;
    this->BillboardComp->SetupAttachment(RootComponent);
    this->ArrowComp->SetupAttachment(RootComponent);
}

void ALookAtEye::WatchLoop() {
}

void ALookAtEye::StopWatching() {
}

void ALookAtEye::StartWatching() {
}

void ALookAtEye::SelectNewTarget() {
}

void ALookAtEye::RotateToTarget() {
}

void ALookAtEye::OnEndOverlapSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex) {
}

void ALookAtEye::OnEndInteractSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void ALookAtEye::OnBeginOverlapSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UPrimitiveComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UPrimitiveComponent* pOtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ALookAtEye::OnBeginInteractSackboy(UOverlapManagerComponent* pOverlapManagerComponent, UInteractionComponent* pOverlappedComponent, ASackboy* pOtherSackboy, UInteractionComponent* pOtherComp) {
}

void ALookAtEye::MultiTargetTimerStop() {
}

void ALookAtEye::MultiTargetTimerStart() {
}

FVector ALookAtEye::GetSackboysAverageLocation() {
    return FVector{};
}

TWeakObjectPtr<ASackboy> ALookAtEye::GetClosestSackboy() const {
    return NULL;
}


