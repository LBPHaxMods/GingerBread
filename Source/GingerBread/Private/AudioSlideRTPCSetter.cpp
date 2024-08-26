#include "AudioSlideRTPCSetter.h"
#include "Components/BoxComponent.h"
#include "Components/SplineComponent.h"
#include "InteractionComponent.h"

AAudioSlideRTPCSetter::AAudioSlideRTPCSetter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->m_pBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->m_pBoxInteraction = CreateDefaultSubobject<UInteractionComponent>(TEXT("BoxInteraction"));
    this->m_bEnable = true;
    this->m_RTPCName = TEXT("sackboy_slide_position");
}

void AAudioSlideRTPCSetter::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAudioSlideRTPCSetter::OnEndInteractionOverlap(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}

void AAudioSlideRTPCSetter::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AAudioSlideRTPCSetter::OnBeginInteractionOverlap(UInteractionComponent* OverlappedComponent, AActor* OtherActor, UInteractionComponent* OtherComp) {
}


