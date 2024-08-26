#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESackboyEmotionalState.h"
#include "SackboyActingFunctionLibrary.generated.h"

class ASackboy;
class USackboyAnimInstance;

UCLASS(Blueprintable)
class USackboyActingFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USackboyActingFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateSackboyActingHandState(ASackboy* playerSackboy, USackboyAnimInstance* SackboyAnimInstance);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateSackboyActingArmBlend(USackboyAnimInstance* SackboyAnimInstance, float leftBlendTarget, float rightBlendTarget);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateSackboyActingArmAnim(ASackboy* playerSackboy, USackboyAnimInstance* SackboyAnimInstance, UPARAM(Ref) float& leftBlendTarget, UPARAM(Ref) float& rightBlendTarget);
    
    UFUNCTION(BlueprintCallable)
    static void TickAnimInstanceForSackboyActing(ASackboy* playerSackboy, USackboyAnimInstance* SackboyAnimInstance);
    
    UFUNCTION(BlueprintCallable)
    static bool SetupAnimInstanceForSackboyActing(ASackboy* playerSackboy, USackboyAnimInstance* SackboyAnimInstance);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAnimInstanceFromSackboyActing(USackboyAnimInstance* SackboyAnimInstance);
    
    UFUNCTION(BlueprintCallable)
    static void ProcessSackboyActingMotionInput(ASackboy* Sackboy, USackboyAnimInstance* SackboyAnimInstance);
    
    UFUNCTION(BlueprintCallable)
    static void GetNextSackboyActingEmotionState(ASackboy* playerSackboy, bool& isNewEmotionState, ESackboyEmotionalState& NextState);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNextEmotionalLevel(USackboyAnimInstance* SackboyAnimInstance, ESackboyEmotionalState Emotion);
    
};

