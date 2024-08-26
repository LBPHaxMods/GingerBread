#pragma once
#include "CoreMinimal.h"
#include "EVexMovePoint.h"
#include "VexBehaviour.h"
#include "VexVortexBehaviour.generated.h"

class AVexStuntBomb;
class AVexVortex;

UCLASS(Blueprintable)
class UVexVortexBehaviour : public UVexBehaviour {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AVexVortex> SpawnedVortex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AVexStuntBomb> LeftStuntBomb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AVexStuntBomb> RightStuntBomb;
    
public:
    UVexVortexBehaviour();

private:
    UFUNCTION(BlueprintCallable)
    void VexMoveCompleted(EVexMovePoint ArrivedAtPoint);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnVortexFinished(AVexVortex* FinishedVortex);
    
};

