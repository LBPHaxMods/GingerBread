#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EVexFinalTricksterAttackType.h"
#include "VexFinalAttackSystem.generated.h"

class AVexFinalSplatAttack;

UCLASS(Blueprintable)
class UVexFinalAttackSystem : public UObject {
    GENERATED_BODY()
public:
    UVexFinalAttackSystem();

private:
    UFUNCTION(BlueprintCallable)
    void AttackComplete_Trickster(EVexFinalTricksterAttackType TricksterAttackType);
    
    UFUNCTION(BlueprintCallable)
    void AttackComplete_Transform_Turrets();
    
    UFUNCTION(BlueprintCallable)
    void AttackComplete_Transform_Duopedes();
    
    UFUNCTION(BlueprintCallable)
    void AttackComplete_Transform_Darts();
    
    UFUNCTION(BlueprintCallable)
    void AttackComplete_SplatAttack(AVexFinalSplatAttack* SplatAttack);
    
    UFUNCTION(BlueprintCallable)
    void AttackComplete_ItemAttack();
    
    UFUNCTION(BlueprintCallable)
    void AttackComplete_FistAttack();
    
    UFUNCTION(BlueprintCallable)
    void AttackComplete_DelayedTileShuffle();
    
    UFUNCTION(BlueprintCallable)
    void AttackComplete_BreakWall();
    
    UFUNCTION(BlueprintCallable)
    void AttackComplete_BreakFloor();
    
    UFUNCTION(BlueprintCallable)
    void AttackComplete_BombSpamAttack();
    
};

