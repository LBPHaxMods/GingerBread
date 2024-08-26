#pragma once
#include "CoreMinimal.h"
#include "AIBehaviorCoordinator.h"
#include "KingFroogleCoordinatedSuperAttack.generated.h"

class AActor;

UCLASS(Blueprintable)
class UKingFroogleCoordinatedSuperAttack : public UAIBehaviorCoordinator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CachedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DiscardedActors;
    
public:
    UKingFroogleCoordinatedSuperAttack();

    UFUNCTION(BlueprintCallable)
    void AppendAdditionalFroogles(TArray<AActor*> NewFroogles);
    
};

