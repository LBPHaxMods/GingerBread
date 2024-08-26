#pragma once
#include "CoreMinimal.h"
#include "TouchScreenAppBaseComponent.h"
#include "TouchScreenAppTimerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GINGERBREAD_API UTouchScreenAppTimerComponent : public UTouchScreenAppBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UTouchScreenAppTimerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ActivateApp(const bool NewActive, const float MaxTransitionTime, const bool DontReset);
    
};

