#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIHookPointSourceComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIHookPointSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDebug;
    
    UAIHookPointSourceComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnRegisteredActorDestroyed(AActor* Actor);
    
};

