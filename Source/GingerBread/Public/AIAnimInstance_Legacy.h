#pragma once
#include "CoreMinimal.h"
#include "AIAnimInstance.h"
#include "AIChargeStruct.h"
#include "AIMovementStruct.h"
#include "EAIAnimState.h"
#include "AIAnimInstance_Legacy.generated.h"

UCLASS(Blueprintable, NonTransient)
class UAIAnimInstance_Legacy : public UAIAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EAIAnimState AIState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIChargeStruct Charge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIMovementStruct Movement;
    
    UAIAnimInstance_Legacy();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

