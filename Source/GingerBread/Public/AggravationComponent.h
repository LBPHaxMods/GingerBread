#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AggravationComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAggravationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AggroTarget;
    
    UAggravationComponent(const FObjectInitializer& ObjectInitializer);

};

