#pragma once
#include "CoreMinimal.h"
#include "UITabData.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FUITabData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TabName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> TabHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> TabContainer;
    
    GINGERBREAD_API FUITabData();
};

