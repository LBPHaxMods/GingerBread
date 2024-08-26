#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BootVideoOption.h"
#include "ToolTipSettings.h"
#include "GingerBreadLoadingScreenSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=GingerBread)
class GINGERBREAD_API UGingerBreadLoadingScreenSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FBootVideoOption> BootLoadingScreens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FString> LevelTransitionLoadingScreens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FToolTipSettings Tooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FName ButtonPromptWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FName LoadingWidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FName BasicScreenFadeOffAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FName JoiningGameWidgetName;
    
    UGingerBreadLoadingScreenSettings();

};

