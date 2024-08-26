#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MeanieAttackChoiceEventDelegate.h"
#include "MeaniePhaseEventDelegate.h"
#include "MinibossMeaniePhaseComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMinibossMeaniePhaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CleaveAttackTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeaniePhaseEvent OnPhaseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeanieAttackChoiceEvent OnAttackChoiceChanged;
    
    UMinibossMeaniePhaseComponent(const FObjectInitializer& ObjectInitializer);

};

