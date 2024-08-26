#pragma once
#include "CoreMinimal.h"
#include "GingerbreadPlayerPanelActions.generated.h"

USTRUCT(BlueprintType)
struct FGingerbreadPlayerPanelActions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConfirmActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CancelActionName;
    
    GINGERBREAD_API FGingerbreadPlayerPanelActions();
};

