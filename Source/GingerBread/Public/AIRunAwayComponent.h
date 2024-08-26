#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIRunAwayParams.h"
#include "AIRunAwayComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIRunAwayComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIRunAwayParams RunAwayParams;
    
    UAIRunAwayComponent(const FObjectInitializer& ObjectInitializer);

};

