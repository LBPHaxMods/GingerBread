#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESackboyEmotionalState.h"
#include "UI_EmotionalStateTableRow_C.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FUI_EmotionalStateTableRow_C : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESackboyEmotionalState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FriendlyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    GINGERBREAD_API FUI_EmotionalStateTableRow_C();
};

