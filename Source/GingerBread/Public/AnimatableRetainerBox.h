#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Components/RetainerBox.h"
#include "AnimatableRetainerBox.generated.h"

UCLASS(Blueprintable)
class UAnimatableRetainerBox : public URetainerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
public:
    UAnimatableRetainerBox();

};

