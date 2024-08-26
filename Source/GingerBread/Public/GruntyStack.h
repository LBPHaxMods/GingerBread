#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GruntyStackActor.h"
#include "GruntyStack.generated.h"

class AGingerbreadAICharacter;
class AGrunty;
class UGruntyStackActionComponent;

UCLASS(Blueprintable)
class AGruntyStack : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGruntyStackActionComponent* ActionComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StackActorsUpdated, meta=(AllowPrivateAccess=true))
    TArray<FGruntyStackActor> StackActors;
    
public:
    AGruntyStack(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnStackActorDestroyed(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StackActorsUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void GruntyAnimUpdated(AGrunty* Grunty);
    
    UFUNCTION(BlueprintCallable)
    TArray<AGingerbreadAICharacter*> GetStackActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CurrentlyHasShield() const;
    
};

