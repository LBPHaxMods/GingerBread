#pragma once
#include "CoreMinimal.h"
#include "PushMePullYouCrusherBase.h"
#include "PushMePullYouControlledCrusher.generated.h"

class APullOutPlatform;
class UAkAudioEvent;
class UAkComponent;

UCLASS(Abstract, Blueprintable)
class APushMePullYouControlledCrusher : public APushMePullYouCrusherBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* Ak_PushMePullYouControlledCrusher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APullOutPlatform> PullOutPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartMovementAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMovementAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PositionRTPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpeedRTPCName;
    
public:
    APushMePullYouControlledCrusher(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPullOutPlatformPositionUpdated(float Position);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EDITOR_CopyProperties(APullOutPlatform* InPullOutPlatform);
    
};

