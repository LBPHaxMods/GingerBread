#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HudRootSceneComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHudRootSceneComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EditorBoundsScale;
    
    UHudRootSceneComponent(const FObjectInitializer& ObjectInitializer);

};

