#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "PlayerScoreBarComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerScoreBarComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPlayerScoreBarComponent(const FObjectInitializer& ObjectInitializer);

};

