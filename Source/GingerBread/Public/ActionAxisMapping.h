#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "ActionAxisMapping.generated.h"

USTRUCT(BlueprintType)
struct FActionAxisMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputAxisKeyMapping AxisInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UIPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShownOnUI;
    
    GINGERBREAD_API FActionAxisMapping();
};

