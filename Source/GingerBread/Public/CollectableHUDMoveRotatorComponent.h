#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollectableHUDMoverComponent.h"
#include "CollectableHUDMoveRotatorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UCollectableHUDMoveRotatorComponent : public UCollectableHUDMoverComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NumRotations;
    
    UCollectableHUDMoveRotatorComponent(const FObjectInitializer& ObjectInitializer);

};

