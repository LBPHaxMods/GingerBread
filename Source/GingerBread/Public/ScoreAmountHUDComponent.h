#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPlayerSlot.h"
#include "EUIScoreShowType.h"
#include "ScoreAmountHUDComponent.generated.h"

class AActor;
class AScoreHudOverheadActorBase;
class UCurveFloat;
class UScoreAmountHUD;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UScoreAmountHUDComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScoreAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScoreSizeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScoreCooldownCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateAmountTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BagOpenCoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShowOffTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UScoreAmountHUD> OwningHudComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mp3DWalletActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mp3DOverheadActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AScoreHudOverheadActorBase*> ActiveOverheadActors;
    
public:
    UScoreAmountHUDComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterOverheadSequenceActor(AScoreHudOverheadActorBase* OverheadSequenceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopCountUp3DActor();
    
    UFUNCTION(BlueprintCallable)
    void ShowPermanent(bool ShowPermanently);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show3DActor(bool animate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScore3DActor(const FText& ScoreText);
    
    UFUNCTION(BlueprintCallable)
    void SetScore(int32 newAmount, int32 oldAmount, EUIScoreShowType DisplayType);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerSlot(EPlayerSlot PlayerSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIdlePlayRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void ResetCollectionState();
    
    UFUNCTION(BlueprintCallable)
    void RegisterOverheadSequenceActor(AScoreHudOverheadActorBase* OverheadSequenceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayTextChangedAnim3DActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySingleCollectionSequence(int32 NumCollectabells);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutOfLevelSequence(int32 NumCollectabells);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutOfLevelDoublePinSequence(int32 NumCollectabells);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenBag3DActor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshPlayerVisuals();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBagShown();
    
    UFUNCTION(BlueprintCallable)
    void OnBagOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBagOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialise3DActors(AActor* wallet, AActor* OverHead);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide3DActor(bool animate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerSlot GetTargetPlayerSlot() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* Get3DWalletActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* Get3DOverheadActor();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnablePlayerIcon(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CountUp3DActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseBag3DActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreOverheadSequenceActorSynchronised() const;
    
};

