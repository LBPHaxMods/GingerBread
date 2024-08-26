#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ActionAxisMapping.h"
#include "ActionKeyMapping.h"
#include "ESackboyActivity.h"
#include "AppliedControlScheme.generated.h"

USTRUCT(BlueprintType)
struct FAppliedControlScheme {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionKeyMapping> ActionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionAxisMapping> AxisMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionAxisMapping> VectorAxisMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ESackboyActivity> AllowedActivities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressButtonPresses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FKey> SuppressButtonExceptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PushedDirectly;
    
    GINGERBREAD_API FAppliedControlScheme();
};

