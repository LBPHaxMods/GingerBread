#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Framework/Text/TextLayout.h"
#include "Types/SlateEnums.h"
#include "3DUI_DigitStruct.h"
#include "3DUI_GenericText.generated.h"

class U3DUI_TextDigit;
class UCurveFloat;
class UHudRootSceneComponent;
class USceneComponent;

UCLASS(Blueprintable)
class A3DUI_GenericText : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FScaleOnFinishedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FScaleOffFinishedDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<U3DUI_TextDigit*> ChangedDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalTextWidth;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScaleOnFinishedDelegate ScaleOnFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScaleOffFinishedDelegate ScaleOffFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, F3DUI_DigitStruct> DigitMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DigitChangedRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleOnCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleOffCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DigitMeshHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DigitYawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString textString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TextDigitScales;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> TextScaledJustification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextJustify::Type> TextHorizontalJustification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> TextVerticalJustification;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHudRootSceneComponent* HudRootScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TextJustifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    U3DUI_TextDigit* TextDigit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    U3DUI_TextDigit* TextDigit1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    U3DUI_TextDigit* TextDigit2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    U3DUI_TextDigit* TextDigit3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    U3DUI_TextDigit* TextDigit4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    U3DUI_TextDigit* TextDigit5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    U3DUI_TextDigit* TextDigit6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    U3DUI_TextDigit* TextDigit7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    U3DUI_TextDigit* TextDigit8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    U3DUI_TextDigit* TextDigit9;
    
public:
    A3DUI_GenericText(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Timeline_Anim_DigitChanged_TimelineUpdate(float textPitchRotation);
    
    UFUNCTION(BlueprintCallable)
    void Timeline_Anim_DigitChanged_TimelineFinished();
    
    UFUNCTION(BlueprintCallable)
    void SetTextScaled(const FString& NewTextString, TArray<float>& digitScales);
    
    UFUNCTION(BlueprintCallable)
    void SetTextColour(FLinearColor Colour);
    
    UFUNCTION(BlueprintCallable)
    void SetText(const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    void ScaleOn_TimelineUpdate(float ScaleUp);
    
    UFUNCTION(BlueprintCallable)
    void ScaleOn_TimelineFinished();
    
    UFUNCTION(BlueprintCallable)
    void ScaleOff_TimelineUpdate(float ScaleDown);
    
    UFUNCTION(BlueprintCallable)
    void ScaleOff_TimelineFinished();
    
    UFUNCTION(BlueprintCallable)
    void PlayScaleOn();
    
    UFUNCTION(BlueprintCallable)
    void PlayScaleOff();
    
    UFUNCTION(BlueprintCallable)
    void PlayDigitChangedAnimSpecified(float progressiveDelay, const TArray<U3DUI_TextDigit*>& digitArray);
    
    UFUNCTION(BlueprintCallable)
    void PlayDigitChangedAnim(float progressiveDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsIndexDisplayingDigit(int32 Index, const FString& digit, bool& isShowing);
    
    UFUNCTION(BlueprintCallable)
    void GetDigitsInUse(TArray<U3DUI_TextDigit*>& digits);
    
};

