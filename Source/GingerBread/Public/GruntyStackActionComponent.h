#pragma once
#include "CoreMinimal.h"
#include "AIActionComponent.h"
#include "GruntyStackActionComponent.generated.h"

class UGruntyAnimInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGruntyStackActionComponent : public UAIActionComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGruntyAnimInstance> BottomAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGruntyAnimInstance> TopAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<UGruntyAnimInstance*> MiddleAnimInstances;
    
public:
    UGruntyStackActionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

