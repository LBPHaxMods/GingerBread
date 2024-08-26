#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIActionData.h"
#include "AIActionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIActionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NewAction, meta=(AllowPrivateAccess=true))
    FAIActionData Rep_NewAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionTable;
    
    UAIActionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RegisterAction(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NewAction();
    
    UFUNCTION(BlueprintCallable)
    bool DoAction(FName ActionName);
    
};

