#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EVexFinalTricksterAttackType.h"
#include "VexFinalAttackSet.h"
#include "VexFinalAttackLoopComponent.generated.h"

class UVexFinalAttackAction;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVexFinalAttackLoopComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NumberOfCyclesPerStage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVexFinalAttackAction*> CreatedAttackActions;
    
public:
    UVexFinalAttackLoopComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetCycle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStageChange(int32 InStage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVexFinalAttackAction* MakeAttackAction_VanishMove(float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVexFinalAttackAction* MakeAttackAction_Trickster(EVexFinalTricksterAttackType TricksterAttackType, float Delay, bool WaitForCompletion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVexFinalAttackAction* MakeAttackAction_Transform_Turrets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVexFinalAttackAction* MakeAttackAction_Transform_Duopedes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVexFinalAttackAction* MakeAttackAction_Transform_Darts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVexFinalAttackAction* MakeAttackAction_SplatAttack(bool UseVexHands, bool WaitForCompletion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVexFinalAttackAction* MakeAttackAction_Reveal(float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVexFinalAttackAction* MakeAttackAction_ItemAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVexFinalAttackAction* MakeAttackAction_FistAttack(bool WaitForCompletion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVexFinalAttackAction* MakeAttackAction_BreakWall();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVexFinalAttackAction* MakeAttackAction_BreakFloor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVexFinalAttackAction* MakeAttackAction_BombSpamAttack(bool WaitForCompletion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSackboyInProximity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVexFinalAttackSet GetStageIntroActions(int32 InStage, bool OutOfStun, bool OutOfConsecutiveHits);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVexFinalAttackSet GetPostStunActions(bool InFinishedOffScreen, bool OutOfConsecutiveHit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVexFinalAttackSet GetPostConsecutiveHitsActions(bool InFinishedOffScreen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVexFinalAttackSet GetCyclicActions(int32 InStage, int32 InCycle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStealLives() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanManipulateSackboys() const;
    
};

