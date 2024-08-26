#pragma once
#include "CoreMinimal.h"
#include "GingerbreadHUDComponent.h"
#include "ButtonPromptHUD.generated.h"

class UDataTable;
class UTextBlock;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UButtonPromptHUD : public UGingerbreadHUDComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ContextTextWidgets[4];
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* PlayerWidgets[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OnOffAnimations[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PlayerAnimations[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetName_CraftBelt[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetName_R2Prompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetName_R2Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetName_CirclePrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetName_CircleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationName_P1P3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationName_P2P4;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationTime_P1234[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationName_OnOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationTime_On;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationTime_Off;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActionTextPrompts;
    
    UButtonPromptHUD(const FObjectInitializer& ObjectInitializer);

};

