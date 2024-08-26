#pragma once
#include "CoreMinimal.h"
#include "EObjectSpitterAnimState.h"
#include "LevelObjectAnimInstance.h"
#include "ObjectSpitterAnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class UObjectSpitterAnimInstance : public ULevelObjectAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EObjectSpitterAnimState::Type> State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnterIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnterSwallowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnterSpitting;
    
public:
    UObjectSpitterAnimInstance();

};

