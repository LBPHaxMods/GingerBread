#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AISlideComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAISlideComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryTime;
    
    UAISlideComponent(const FObjectInitializer& ObjectInitializer);

};

