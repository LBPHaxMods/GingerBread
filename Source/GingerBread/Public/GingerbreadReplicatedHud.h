#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EVoidSelectVOType.h"
#include "ReplicatedScreenStack.h"
#include "GingerbreadReplicatedHud.generated.h"

class AGingerbreadHUD;

UCLASS(Blueprintable)
class AGingerbreadReplicatedHud : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HostReplicatedScreenStack, meta=(AllowPrivateAccess=true))
    FReplicatedScreenStack HostReplicatedScreenStack;
    
    AGingerbreadReplicatedHud(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ReplicateVoidSelectVO(EVoidSelectVOType Type, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HostReplicatedScreenStack();
    
    UFUNCTION(BlueprintCallable)
    AGingerbreadHUD* GetOwnerHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CallOnRepFunctions();
    
};

