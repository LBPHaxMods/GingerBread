#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ESlideOverrideState.h"
#include "SlideOverride.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USlideOverride : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlideOverrideState Override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreFlatSurfaces;
    
    USlideOverride(const FObjectInitializer& ObjectInitializer);

};

