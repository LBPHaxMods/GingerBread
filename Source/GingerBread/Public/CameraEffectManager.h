#pragma once
#include "CoreMinimal.h"
#include "CameraEffectManagerEventDelegate.h"
#include "ECameraEffectResult.h"
#include "GingerbreadManager.h"
#include "CameraEffectManager.generated.h"

class ACameraEffectManager;
class UCameraEffectDataAsset;
class UObject;

UCLASS(Blueprintable)
class ACameraEffectManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraEffectManagerEvent OnDilationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraEffectManagerEvent OnFadeOutStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraEffectManagerEvent OnDilationFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraEffectManagerEvent OnInterrupted;
    
    ACameraEffectManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ECameraEffectResult::Type> PlayEffect(UCameraEffectDataAsset* Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ACameraEffectManager* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentSequenceID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPlayTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraEffectDataAsset* GetCurrentEffect() const;
    
};

