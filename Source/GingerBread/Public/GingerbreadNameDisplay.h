#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GingerbreadPlayerId.h"
#include "GingerbreadNameDisplay.generated.h"

class ASackboy;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadNameDisplay : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerNameTextBlockName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BackgroundImageName;
    
    UGingerbreadNameDisplay();

    UFUNCTION(BlueprintCallable)
    void SetNameFromSackboy(ASackboy* playerSackboy);
    
    UFUNCTION(BlueprintCallable)
    void SetNameFromID(FGingerbreadPlayerId PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckNameIsRenderable(FGingerbreadPlayerId PlayerId);
    
};

