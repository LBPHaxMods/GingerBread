#pragma once
#include "CoreMinimal.h"
#include "HudActor3D.h"
#include "ProgressionData.h"
#include "ProgressionNotificationActor.generated.h"

UCLASS(Blueprintable)
class AProgressionNotificationActor : public AHudActor3D {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextNotificationTimer;
    
public:
    AProgressionNotificationActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowProgression(const FProgressionData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide();
    
};

