#pragma once
#include "CoreMinimal.h"
#include "UIMenuPromptButtonData.h"
#include "UIMenuPromptsCollection.generated.h"

USTRUCT(BlueprintType)
struct FUIMenuPromptsCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIMenuPromptButtonData> MenuPrompts;
    
    GINGERBREAD_API FUIMenuPromptsCollection();
};

