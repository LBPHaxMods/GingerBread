#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "PSCompeteEndHUDComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UPSCompeteEndHUDComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPSCompeteEndHUDComponent(const FObjectInitializer& ObjectInitializer);

};

