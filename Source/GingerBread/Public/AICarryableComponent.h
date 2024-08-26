#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AICarryable.h"
#include "OnInteractDelegateDelegate.h"
#include "OnSpawnDelegateDelegate.h"
#include "AICarryableComponent.generated.h"

class AActor;
class AGingerbreadAICharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UAICarryableComponent : public UActorComponent, public IAICarryable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawnDelegate OnSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractDelegate OnPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractDelegate OnThrown;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractDelegate OnPlaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractDelegate OnDropped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
public:
    UAICarryableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnHit(AActor* OtherActor);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void OnSpawnedByAI() override PURE_VIRTUAL(OnSpawnedByAI,);
    
    UFUNCTION()
    void OnAIThrown(AGingerbreadAICharacter* ThrownBy) override PURE_VIRTUAL(OnAIThrown,);
    
    UFUNCTION()
    void OnAIPlaced(AGingerbreadAICharacter* PlacedBy) override PURE_VIRTUAL(OnAIPlaced,);
    
    UFUNCTION()
    void OnAIPickedUp(AGingerbreadAICharacter* PickedUpBy) override PURE_VIRTUAL(OnAIPickedUp,);
    
    UFUNCTION()
    void OnAIDropped(AGingerbreadAICharacter* DroppedBy) override PURE_VIRTUAL(OnAIDropped,);
    
    UFUNCTION()
    bool CanPickup() override PURE_VIRTUAL(CanPickup, return false;);
    
};

