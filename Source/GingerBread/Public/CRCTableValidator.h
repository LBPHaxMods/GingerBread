#pragma once
#include "CoreMinimal.h"
#include "DataTableValidator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableValidator -FallbackName=DataTableValidator
#include "CRCTableValidator.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UCRCTableValidator : public UDataTableValidator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowIDWatermark;
    
public:
    UCRCTableValidator();

};

