#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GruntyTurnParams.h"
#include "GruntyTurnComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGruntyTurnComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGruntyTurnParams StackedTurnParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGruntyTurnParams UnstackedTurnParams;
    
    UGruntyTurnComponent(const FObjectInitializer& ObjectInitializer);

};

