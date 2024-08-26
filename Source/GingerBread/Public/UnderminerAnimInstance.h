#pragma once
#include "CoreMinimal.h"
#include "AIAnimInstance.h"
#include "EUnderminerGenericState.h"
#include "UnderminerAnimInstance.generated.h"

class UAlertComponent;
class UCapsuleComponent;
class ULookAtComponent;

UCLASS(Blueprintable, NonTransient)
class UUnderminerAnimInstance : public UAIAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnderminerGenericState GenericState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULookAtComponent* LookAtComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAlertComponent* AlertComponent;
    
public:
    UUnderminerAnimInstance();

    UFUNCTION(BlueprintCallable)
    void ChangeState(EUnderminerGenericState NewState);
    
};

