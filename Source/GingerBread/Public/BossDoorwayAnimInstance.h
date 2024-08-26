#pragma once
#include "CoreMinimal.h"
#include "LevelObjectAnimInstance.h"
#include "BossDoorwayAnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class UBossDoorwayAnimInstance : public ULevelObjectAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDoorOpen;
    
public:
    UBossDoorwayAnimInstance();

};

