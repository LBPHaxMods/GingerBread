#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECollectabellSize.h"
#include "SplineFollowingEnemyChainDestroyedDelegate.h"
#include "SplineFollowingEnemyLinkDestroyedDelegate.h"
#include "SplineFollowingEnemyChain.generated.h"

class AActor;
class USplineFollowingEnemyChain;

UCLASS(Blueprintable)
class USplineFollowingEnemyChain : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Links;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineFollowingEnemyChainDestroyed OnChainDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineFollowingEnemyLinkDestroyed OnLinkDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollectabellSize LinkKillReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollectabellSize ChainKillReward;
    
    USplineFollowingEnemyChain();

    UFUNCTION(BlueprintCallable)
    void RemoveLink(AActor* Link, bool& bIsLastLink);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void DestroyLink(AActor* Link, bool bShouldReward);
    
    UFUNCTION(BlueprintCallable)
    void DestroyChain();
    
    UFUNCTION(BlueprintCallable)
    static USplineFollowingEnemyChain* CreateSplineFollowingEnemyChain(UObject* Owner);
    
};

