#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "GingerbreadTextBlock.generated.h"

UCLASS(Blueprintable)
class UGingerbreadTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UGingerbreadTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetWrapTextAtSize(float WrapTextAtSize);
    
};

