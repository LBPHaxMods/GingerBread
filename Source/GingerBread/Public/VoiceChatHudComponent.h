#pragma once
#include "CoreMinimal.h"
#include "EPlayerSlot.h"
#include "EVoiceIndicatorPositionType.h"
#include "GingerbreadHUDComponent.h"
#include "UIVoiceActivityChangeDelegate.h"
#include "VoiceChatHudComponent.generated.h"

class UGingerbreadScreen;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UVoiceChatHudComponent : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopTalkingDelay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIVoiceActivityChange VoiceActivityStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoiceIndicatorPositionType DefaultVoicePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EVoiceIndicatorPositionType> ScreenVoicePositions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> ScreenRequestAllowed;
    
public:
    UVoiceChatHudComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVoicePosition(FName ScreenName, EVoiceIndicatorPositionType PositionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSlotTalking(EPlayerSlot PlayerSlot, const FString& PlayerName, bool Talking);
    
    UFUNCTION(BlueprintCallable)
    void SetRequestShowAllowed(FName ScreenName, bool IsAllowed);
    
    UFUNCTION(BlueprintCallable)
    void ScreenPush(UGingerbreadScreen* pPushedScreen);
    
    UFUNCTION(BlueprintCallable)
    void ScreenPop(UGingerbreadScreen* pPoppedScreen);
    
    UFUNCTION(BlueprintCallable)
    void ResetVoicePosition(FName ScreenName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyPlayerTalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVoiceIndicatorPositionType GetVoicePosition(FName ScreenName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRequestShowAllowed(FName ScreenName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVoiceIndicatorPositionType GetCurrentVoicePosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentRequestShowAllowed() const;
    
};

