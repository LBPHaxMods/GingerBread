#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EEnemyGroupType.h"
#include "AICoordinatorRegistrationComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UAICoordinatorRegistrationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyGroupType EnemyGroupType;
    
    UAICoordinatorRegistrationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Unregister();
    
    UFUNCTION(BlueprintCallable)
    void Register();
    
    UFUNCTION(BlueprintCallable)
    void OnCoordinatorManagerAvailable(AActor* ManagerActor);
    
};

