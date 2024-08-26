#pragma once
#include "CoreMinimal.h"
#include "ButtonatorButton.generated.h"

USTRUCT(BlueprintType)
struct FButtonatorButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tooltip;
    
    GINGERBREAD_API FButtonatorButton();
};

