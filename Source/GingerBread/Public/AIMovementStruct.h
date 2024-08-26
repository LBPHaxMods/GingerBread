#pragma once
#include "CoreMinimal.h"
#include "AIMovementStruct.generated.h"

class UGBCharacterMovementComponent;

USTRUCT(BlueprintType)
struct FAIMovementStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeedPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGBCharacterMovementComponent* component;
    
    GINGERBREAD_API FAIMovementStruct();
};

