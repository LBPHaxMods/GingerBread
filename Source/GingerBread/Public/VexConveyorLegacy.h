#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VexConveyorLegacy.generated.h"

UCLASS(Blueprintable)
class AVexConveyorLegacy : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReversed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFullOnFire;
    
    AVexConveyorLegacy(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TurnOnAllFlamePanels();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TurnOffAllFlamePanels();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TriggerFlamePanelPattern(const TArray<bool>& pattern, bool PostAKEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetBeltSpeed(float beltSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetNumberOfFlamePanels();
    
};

