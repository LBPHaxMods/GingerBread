#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TriggerRegistrarComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UTriggerRegistrarComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AssignedToTrigger;
    
    UTriggerRegistrarComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAssignedToTrigger(bool bInAssigned);
    
    UFUNCTION(BlueprintCallable)
    void RegisterActor(AActor* InActor);
    
};

