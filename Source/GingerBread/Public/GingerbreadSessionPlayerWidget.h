#pragma once
#include "CoreMinimal.h"
#include "GingerbreadWidgetElement.h"
#include "GingerbreadSessionPlayerWidget.generated.h"

class ASackboy;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadSessionPlayerWidget : public UGingerbreadWidgetElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceStoppedDelay;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASackboy> TargetedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayerTalking;
    
public:
    UGingerbreadSessionPlayerWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTargetSackboy(ASackboy* TargetSackboy);
    
    UFUNCTION(BlueprintCallable)
    void SetMutePlayer(bool IsMuted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoiceStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVoiceEnd();
    
    UFUNCTION(BlueprintCallable)
    void KickPlayer();
    
    UFUNCTION(BlueprintCallable)
    bool IsSackboyLocal(ASackboy* playerSackboy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerConnectionQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASackboy* GetLocalSackboy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIfPlayerMuted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanKickPlayer() const;
    
};

