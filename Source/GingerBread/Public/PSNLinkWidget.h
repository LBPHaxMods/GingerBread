#pragma once
#include "CoreMinimal.h"
#include "EPSNLinkState.h"
#include "GingerbreadWidget.h"
#include "PSNLinkWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UPSNLinkWidget : public UGingerbreadWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPSNLinkState LinkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* QRTexture2D;
    
public:
    UPSNLinkWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateQRCode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLinkQRImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateLinkButtonState();
    
    UFUNCTION(BlueprintCallable)
    void StartPSNUnlink();
    
    UFUNCTION(BlueprintCallable)
    void StartPSNLink();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateRegisterPSNAccount(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateQRCode(bool bWasSuccessful, const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void ManualTick(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void LaunchURL(bool bWasSuccessful, const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    bool IsPSNLinkEnabled();
    
    UFUNCTION(BlueprintCallable)
    void DeregisterComplete(bool bWasSuccessful);
    
};

