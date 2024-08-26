#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FloatyBubbleResizeParams.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "FloatyBubbleRespawner.generated.h"

class AFloatyBubble;
class UCurveFloat;

UCLASS(Blueprintable)
class AFloatyBubbleRespawner : public APlayerCountActor, public IWakeSleep {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFloatyBubble* BubbleToRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnSequenceEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatyBubbleResizeParams SpawnSequenceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RespawnPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DestinationPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RespawnMotionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RespawnMotionCurve;
    
public:
    AFloatyBubbleRespawner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RespawnBubble(AFloatyBubble* bubble);
    

    // Fix for true pure virtual functions not being implemented
};

