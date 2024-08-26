#include "VexFinalItemAttackTarget.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"

AVexFinalItemAttackTarget::AVexFinalItemAttackTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->TextRenderComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRenderComponent"));
    this->IsRight = true;
    this->TextRenderComponent->SetupAttachment(RootComponent);
}


