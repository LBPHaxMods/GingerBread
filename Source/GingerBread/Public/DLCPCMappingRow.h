#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DLCPCMappingRow.generated.h"

USTRUCT(BlueprintType)
struct FDLCPCMappingRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SonyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SteamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EpicId;
    
    GINGERBREAD_API FDLCPCMappingRow();
};

