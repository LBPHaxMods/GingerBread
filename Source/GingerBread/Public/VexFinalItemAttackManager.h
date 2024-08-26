#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EVexFinalItemAttackType.h"
#include "VexFinalItemAttackManagerSimpleDelegateDelegate.h"
#include "VexFinalItemAttackManager.generated.h"

class AVexFinalEncounter;
class AVexFinalItemAttack;
class AVexFinalItemAttackTarget;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class AVexFinalItemAttackManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVexFinalEncounter* Vex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVexFinalItemAttack*> LeftItemAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVexFinalItemAttack*> RightItemAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVexFinalItemAttackTarget*> ItemAttackTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HandHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VexFacingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OrientateHandsToVex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugShowTargetHanding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalItemAttackManagerSimpleDelegate MultiItemAttackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexFinalItemAttackManagerSimpleDelegate MultiItemAttackComplete;
    
    AVexFinalItemAttackManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerAttack(EVexFinalItemAttackType InItemAttackType, int32 InNumberOfItemsToDrop, float InDelayBetweenDrops);
    
private:
    UFUNCTION(BlueprintCallable)
    void DropItemComplete(AActor* Item);
    
};

