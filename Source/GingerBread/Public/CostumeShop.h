#pragma once
#include "CoreMinimal.h"
#include "WorldMapInteractableObject.h"
#include "CostumeShop.generated.h"

class ASackboy;

UCLASS(Blueprintable)
class GINGERBREAD_API ACostumeShop : public AWorldMapInteractableObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeEntry;
    
    ACostumeShop(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateNewCostumesAvailableIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerExitVFX_BP(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUpFXCallback();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Net_SetUpFXCallback();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_HandleFinalSackboyEnteredCostumeShop();
    
    UFUNCTION(BlueprintCallable)
    void HandleSackboyEnteredCostumeShop(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable)
    void HandleFinalSackboyEnteredCostumeShop(TArray<ASackboy*>& EnteredSackboys);
    
};

