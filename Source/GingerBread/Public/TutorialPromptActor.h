#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TutorialPromptActor.generated.h"

class ASackboy;

UCLASS(Blueprintable)
class ATutorialPromptActor : public AActor {
    GENERATED_BODY()
public:
    ATutorialPromptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTutorialOnSackboy(ASackboy* Sacboy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTutorialText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideTutorial();
    
};

