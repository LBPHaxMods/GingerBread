#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "CameraAreaCollider.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCameraAreaCollider : public UBoxComponent {
    GENERATED_BODY()
public:
    UCameraAreaCollider(const FObjectInitializer& ObjectInitializer);

};

