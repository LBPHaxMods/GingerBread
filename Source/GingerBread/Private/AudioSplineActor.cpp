#include "AudioSplineActor.h"
#include "Components/SplineComponent.h"
#include "AudioSplineComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerActorComponent.h"

AAudioSplineActor::AAudioSplineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->AudioSplineComponent = CreateDefaultSubobject<UAudioSplineComponent>(TEXT("AudioSplineComponent"));
    this->TriggerActorComponent = CreateDefaultSubobject<UTriggerActorComponent>(TEXT("TriggerActorComponent"));
    this->bIsActive = true;
    this->bIsEnabled = true;
}

void AAudioSplineActor::OnRep_EnabledChanged() {
}

void AAudioSplineActor::OnRep_ActiveChanged() {
}

void AAudioSplineActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAudioSplineActor, bIsActive);
    DOREPLIFETIME(AAudioSplineActor, bIsEnabled);
}


