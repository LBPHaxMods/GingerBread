#pragma once
#include "CoreMinimal.h"
#include "EBootVideoSubsequentType.h"
#include "EBootVideoType.h"
#include "EGingerbreadSKUType.h"
#include "BootVideoOption.generated.h"

USTRUCT(BlueprintType)
struct FBootVideoOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString LowQualityVideoPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString HighQualityVideoPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FString WideScreenVideoPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EBootVideoSubsequentType SubsequentOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    EBootVideoType BootVideoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<EGingerbreadSKUType> SkuFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FString> CultureFilter;
    
    GINGERBREAD_API FBootVideoOption();
};

