#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnDebugMenuSectionSelectedDelegate.h"
#include "OnVariableAddedDelegate.h"
#include "OnVariableRemovedDelegate.h"
#include "GingerbreadDebugManager.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UGingerbreadDebugManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVariableAdded OnVariableAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVariableRemoved OnVariableRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDebugMenuSectionSelected OnDebugMenuSectionSelected;
    
    UGingerbreadDebugManager();

};

