#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RemapAssociationStruct.generated.h"

USTRUCT(BlueprintType)
struct FRemapAssociationStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UIName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Actions;
    
    GINGERBREAD_API FRemapAssociationStruct();
};

