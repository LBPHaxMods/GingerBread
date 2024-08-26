#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EBounceToEnterState.h"
#include "FinalSackboyEnteredEventDelegate.h"
#include "FinalSackboyLandedEventDelegate.h"
#include "GingerbreadPlayerId.h"
#include "SackboyEnteredEventDelegate.h"
#include "SackboyLandedEventDelegate.h"
#include "BounceToEnterComponent.generated.h"

class AActor;
class ASackboy;
class AWorldMapGameMode;
class UInteractionComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UBounceToEnterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWorldMapGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* LandingTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionComponent* LandingInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASackboy*> BouncedSackboys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASackboy*> LandedSackboys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASackboy*> EnteredSackboys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyLandedEvent SackboyLandedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinalSackboyLandedEvent FinalSackboyLandedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyEnteredEvent SackboyEnteredEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinalSackboyEnteredEvent FinalSackboyEnteredEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSackboyLandedEvent SackboyCallbackEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EBounceToEnterState AUTH_CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ASackboy*, FVector> SackboyPrevPositions;
    
public:
    UBounceToEnterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetLandingTriggerVolume(UPrimitiveComponent* Trigger);
    
    UFUNCTION(BlueprintCallable)
    void SetLandingInteractVolume(UInteractionComponent* Trigger);
    
    UFUNCTION(BlueprintCallable)
    void SetFXCallback(FVector Position, float Radius, const FSackboyLandedEvent& SackboyCallback);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSackboyLeavingLevel(const FGingerbreadPlayerId& PlayerId, ASackboy* Sackboy);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNumberOfSackboysChanged(int32 Num);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnAllSackboysBeginBounce();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveAllSackboysLandedOrEntered() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableSackboyOffscreenCheck(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void EnableSackboyOcclusionEffect(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void EnableSackboyInput(ASackboy* Sackboy, const bool bEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void DetectSackboyLandedInteract(UInteractionComponent* OverlappedComp, AActor* OtherActor, UInteractionComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void DetectSackboyLanded(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSackboyLanded(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSackboyEntered(ASackboy* Sackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAllSackboysLanded(const TArray<ASackboy*>& Sackboys);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAllSackboysEntered(const TArray<ASackboy*>& Sackboys);
    
    UFUNCTION(BlueprintCallable)
    void BeginBounce(const FSackboyLandedEvent& SackboyLanded, const FFinalSackboyLandedEvent& FinalSackboyLanded, const FSackboyEnteredEvent& SackboyEntered, const FFinalSackboyEnteredEvent& FinalSackboyEntered);
    
};

