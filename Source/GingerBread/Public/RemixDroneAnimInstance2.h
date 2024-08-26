#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "RemixDroneAnimInstance2.generated.h"

UCLASS(Blueprintable, NonTransient)
class URemixDroneAnimInstance2 : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenClaws;
    
    URemixDroneAnimInstance2();

};

