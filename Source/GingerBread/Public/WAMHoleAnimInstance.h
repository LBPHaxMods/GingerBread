#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EWAMMoleState.h"
#include "WAMHoleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UWAMHoleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWAMMoleState::Type> State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpen;
    
public:
    UWAMHoleAnimInstance();

};

