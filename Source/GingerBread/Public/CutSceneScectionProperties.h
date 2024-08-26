#pragma once
#include "CoreMinimal.h"
#include "CutSceneScectionProperties.generated.h"

USTRUCT(BlueprintType)
struct FCutSceneScectionProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimOnName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimRemainName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimOffName;
    
    GINGERBREAD_API FCutSceneScectionProperties();
};

