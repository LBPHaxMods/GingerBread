#pragma once
#include "CoreMinimal.h"
#include "ELoadingTheme.h"
#include "ELoadingType.h"
#include "LoadingScreenState.h"
#include "LoadingPersistentState.generated.h"

USTRUCT(BlueprintType)
struct FLoadingPersistentState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoadingType LoadingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELoadingTheme LoadingTheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingScreenState ScreenState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverlayIsVisibleOnEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpinnerShownDuringLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool JoiningNetworkText;
    
    GINGERBREAD_API FLoadingPersistentState();
};

