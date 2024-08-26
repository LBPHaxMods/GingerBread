#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "CustomBBKeySelector.h"
#include "MuteAntActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMuteAntActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomBBKeySelector HitWallKeySelector;
    
    UMuteAntActionComponent(const FObjectInitializer& ObjectInitializer);

};

