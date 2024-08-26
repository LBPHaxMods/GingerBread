#pragma once
#include "CoreMinimal.h"
#include "LevelObjectAnimInstance.h"
#include "Snowball2ProxySBAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class USnowball2ProxySBAnimInstance : public ULevelObjectAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Boost;
    
    USnowball2ProxySBAnimInstance();

};

