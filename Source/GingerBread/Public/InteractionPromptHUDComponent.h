#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "InteractionPromptHUDComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UInteractionPromptHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UInteractionPromptHUDComponent(const FObjectInitializer& ObjectInitializer);

};

