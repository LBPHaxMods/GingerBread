#pragma once
#include "CoreMinimal.h"
#include "LevelObjectAnimInstance.h"
#include "RegularDoorwayAnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class URegularDoorwayAnimInstance : public ULevelObjectAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldBeOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldBeClosed;
    
public:
    URegularDoorwayAnimInstance();

};

