#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EUIScoreAnimState.h"
#include "ScoreHudOverheadActorBase.generated.h"

class ASackboy;
class USceneComponent;
class UScoreAmountHUDComponent;

UCLASS(Blueprintable)
class AScoreHudOverheadActorBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectabellWorth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SubtractWorthInTotal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequestingBagToBeOpen;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASackboy> AssignedSackboy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SackboyLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UScoreAmountHUDComponent> AssignedHudComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WaitingForSynchronisation;
    
public:
    AScoreHudOverheadActorBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSequence(float DeltaTime, EUIScoreAnimState BagState);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSackboyPosition();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterSelfFromHudComponent();
    
    UFUNCTION(BlueprintCallable)
    void SynchroniseWithOtherOverheadScores();
    
    UFUNCTION(BlueprintCallable)
    void SetWantsBagOpen(bool WantsBagOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupForSequence(int32 NewCollectabellWorth);
    
    UFUNCTION(BlueprintCallable)
    void SetAssignedSackboy(ASackboy* SackboyToFollow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSynchronisedWithOtherOverheadScores();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBagOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingForSynchronisation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetBagOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetWantsBagOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSubtractWorthInTotal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetProjectedSackboyScreenPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetComponentToMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCollectabellWorth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelCollection();
    
    UFUNCTION(BlueprintCallable)
    void AssignHudComponent(UScoreAmountHUDComponent* HUDComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AssignBag(AActor* BagActor);
    
};

