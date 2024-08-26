#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EVexMovePoint.h"
#include "VexMoveCompletedDelegate.h"
#include "VexMoveData.h"
#include "VexMoveServerData.h"
#include "VexMovementController.generated.h"

class UCSPHelperComponent;

UCLASS(Blueprintable)
class AVexMovementController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCSPHelperComponent* CSPHelperComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVexMoveCompleted OnMoveCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVexMoveServerData ServerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVexMoveData MoveData_Server;
    
public:
    AVexMovementController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool RequestMoveLooping();
    
protected:
    UFUNCTION(BlueprintCallable)
    void MoveCompleted(EVexMovePoint ArrivedAtPoint);
    
};

