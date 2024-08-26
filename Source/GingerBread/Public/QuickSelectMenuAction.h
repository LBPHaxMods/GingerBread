#pragma once
#include "CoreMinimal.h"
#include "CustomEvent.h"
#include "QuickSelectMenuAction.generated.h"

UCLASS(Blueprintable)
class UQuickSelectMenuAction : public UCustomEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Action;
    
public:
    UQuickSelectMenuAction();

};

