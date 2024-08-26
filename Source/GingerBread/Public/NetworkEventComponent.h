#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NetworkEventComponent.generated.h"

class UCSPHelperComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UNetworkEventComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNetworkEventDelegate, FName, EventName);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNetworkEventDelegate OnNetworkEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelperComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CSPDelay;
    
public:
    UNetworkEventComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartNetworkEvent(FName EventName, bool bUseCSP);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_StartEvent(FName EventName);
    
};

