#pragma once
#include "CoreMinimal.h"
#include "GingerbreadWidgetElement.h"
#include "GingerbreadWidgetList_Item.generated.h"

class UWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UGingerbreadWidgetList_Item : public UGingerbreadWidgetElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* OwnerListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListIndex;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* mAnimations[7];
    
public:
    UGingerbreadWidgetList_Item();

    UFUNCTION(BlueprintCallable)
    void SetAnimations(UWidgetAnimation* Highlight, UWidgetAnimation* Unhighlight, UWidgetAnimation* Select, UWidgetAnimation* Deselect, UWidgetAnimation* LoopHighlight, UWidgetAnimation* GroupShiftHighlight, UWidgetAnimation* GroupShiftUnhighlight);
    
};

