#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UmbrellaAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class GINGERBREAD_API UUmbrellaAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UmbrellaClosed;
    
public:
    UUmbrellaAnimInstance();

};

