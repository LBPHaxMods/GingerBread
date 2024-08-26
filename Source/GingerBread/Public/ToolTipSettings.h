#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ToolTipSettings.generated.h"

USTRUCT(BlueprintType)
struct FToolTipSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FName TextBlockWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FName IconWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    float SecondsPerTip;
    
    GINGERBREAD_API FToolTipSettings();
};

