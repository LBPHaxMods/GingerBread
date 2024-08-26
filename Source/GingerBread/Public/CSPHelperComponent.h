#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CSPHelperAction.h"
#include "CSPHelperComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UCSPHelperComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CSPActions, meta=(AllowPrivateAccess=true))
    TArray<FCSPHelperAction> CSPActions;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ServerLatestActionID, meta=(AllowPrivateAccess=true))
    uint32 Server_LatestActionID;
    
public:
    UCSPHelperComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerLatestActionID();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CSPActions();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_AddCSPAction(const FCSPHelperAction& CSPAction);
    
};

