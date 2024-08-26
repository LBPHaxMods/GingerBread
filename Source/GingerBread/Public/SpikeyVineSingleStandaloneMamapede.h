#pragma once
#include "CoreMinimal.h"
#include "SpikeyVineSingleStandalone.h"
#include "SpikeyVineSingleStandaloneMamapede.generated.h"

UCLASS(Blueprintable)
class ASpikeyVineSingleStandaloneMamapede : public ASpikeyVineSingleStandalone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VanishingTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Visibility, meta=(AllowPrivateAccess=true))
    bool Visiblity_LateJoinRep;
    
public:
    ASpikeyVineSingleStandaloneMamapede(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleVineVisibility(bool visible);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ResetVine();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Visibility();
    
    UFUNCTION(BlueprintCallable)
    void OnClipEnded(int32 ClipIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void CutDown_BP();
    
};

