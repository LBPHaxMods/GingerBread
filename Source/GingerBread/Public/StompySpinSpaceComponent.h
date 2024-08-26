#pragma once
#include "CoreMinimal.h"
#include "StompySpinBaseComponent.h"
#include "StompySpinSpaceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStompySpinSpaceComponent : public UStompySpinBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinStartHeadDamageAuraTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinStopHeadDamageAuraTime;
    
    UStompySpinSpaceComponent(const FObjectInitializer& ObjectInitializer);

};

