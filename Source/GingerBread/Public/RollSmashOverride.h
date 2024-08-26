#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ERollSmashOverrideState.h"
#include "RollSmashOverride.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URollSmashOverride : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERollSmashOverrideState Override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceMultiplier;
    
    URollSmashOverride(const FObjectInitializer& ObjectInitializer);

};

