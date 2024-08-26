#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "ActionKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct FActionKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputActionKeyMapping KeyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SwappableEnterAndBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UIPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShownOnUI;
    
    GINGERBREAD_API FActionKeyMapping();
};

