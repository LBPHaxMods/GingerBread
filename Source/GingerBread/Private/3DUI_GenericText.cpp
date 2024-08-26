#include "3DUI_GenericText.h"
#include "Components/SceneComponent.h"
#include "3DUI_TextDigit.h"
#include "HudRootSceneComponent.h"

A3DUI_GenericText::A3DUI_GenericText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UHudRootSceneComponent>(TEXT("HudRootScene"));
    this->TotalTextWidth = 0.00f;
    this->DigitChangedRotationCurve = NULL;
    this->ScaleOnCurve = NULL;
    this->ScaleOffCurve = NULL;
    this->DigitMeshHeight = 71.00f;
    this->DigitYawOffset = 0.00f;
    this->TextScaledJustification = VAlign_Center;
    this->TextHorizontalJustification = ETextJustify::Left;
    this->TextVerticalJustification = VAlign_Center;
    this->HudRootScene = (UHudRootSceneComponent*)RootComponent;
    this->TextJustifier = CreateDefaultSubobject<USceneComponent>(TEXT("TextJustifier"));
    this->TextDigit = CreateDefaultSubobject<U3DUI_TextDigit>(TEXT("TextDigit"));
    this->TextDigit1 = CreateDefaultSubobject<U3DUI_TextDigit>(TEXT("TextDigit1"));
    this->TextDigit2 = CreateDefaultSubobject<U3DUI_TextDigit>(TEXT("TextDigit2"));
    this->TextDigit3 = CreateDefaultSubobject<U3DUI_TextDigit>(TEXT("TextDigit3"));
    this->TextDigit4 = CreateDefaultSubobject<U3DUI_TextDigit>(TEXT("TextDigit4"));
    this->TextDigit5 = CreateDefaultSubobject<U3DUI_TextDigit>(TEXT("TextDigit5"));
    this->TextDigit6 = CreateDefaultSubobject<U3DUI_TextDigit>(TEXT("TextDigit6"));
    this->TextDigit7 = CreateDefaultSubobject<U3DUI_TextDigit>(TEXT("TextDigit7"));
    this->TextDigit8 = CreateDefaultSubobject<U3DUI_TextDigit>(TEXT("TextDigit8"));
    this->TextDigit9 = CreateDefaultSubobject<U3DUI_TextDigit>(TEXT("TextDigit9"));
    this->TextJustifier->SetupAttachment(RootComponent);
    this->TextDigit->SetupAttachment(TextJustifier);
    this->TextDigit1->SetupAttachment(TextJustifier);
    this->TextDigit2->SetupAttachment(TextJustifier);
    this->TextDigit3->SetupAttachment(TextJustifier);
    this->TextDigit4->SetupAttachment(TextJustifier);
    this->TextDigit5->SetupAttachment(TextJustifier);
    this->TextDigit6->SetupAttachment(TextJustifier);
    this->TextDigit7->SetupAttachment(TextJustifier);
    this->TextDigit8->SetupAttachment(TextJustifier);
    this->TextDigit9->SetupAttachment(TextJustifier);
}

void A3DUI_GenericText::Timeline_Anim_DigitChanged_TimelineUpdate(float textPitchRotation) {
}

void A3DUI_GenericText::Timeline_Anim_DigitChanged_TimelineFinished() {
}

void A3DUI_GenericText::SetTextScaled(const FString& NewTextString, TArray<float>& digitScales) {
}

void A3DUI_GenericText::SetTextColour(FLinearColor Colour) {
}

void A3DUI_GenericText::SetText(const FString& Text) {
}

void A3DUI_GenericText::ScaleOn_TimelineUpdate(float ScaleUp) {
}

void A3DUI_GenericText::ScaleOn_TimelineFinished() {
}

void A3DUI_GenericText::ScaleOff_TimelineUpdate(float ScaleDown) {
}

void A3DUI_GenericText::ScaleOff_TimelineFinished() {
}

void A3DUI_GenericText::PlayScaleOn() {
}

void A3DUI_GenericText::PlayScaleOff() {
}

void A3DUI_GenericText::PlayDigitChangedAnimSpecified(float progressiveDelay, const TArray<U3DUI_TextDigit*>& digitArray) {
}

void A3DUI_GenericText::PlayDigitChangedAnim(float progressiveDelay) {
}

void A3DUI_GenericText::IsIndexDisplayingDigit(int32 Index, const FString& digit, bool& isShowing) {
}

void A3DUI_GenericText::GetDigitsInUse(TArray<U3DUI_TextDigit*>& digits) {
}


