#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DarkMatterEngineMovable.h"
#include "RideOnEventReceiver.generated.h"

class UBillboardComponent;
class UGlobalEventTransceiver;
class USceneComponent;

UCLASS(Blueprintable)
class ARideOnEventReceiver : public AActor, public IDarkMatterEngineMovable {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRideonEventReceived);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRideonEventReceived EventRecieved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGlobalEventTransceiver* GlobalEventTransceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* EventStart;
    
    ARideOnEventReceiver(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnReceived(UGlobalEventTransceiver* Source);
    

    // Fix for true pure virtual functions not being implemented
};

