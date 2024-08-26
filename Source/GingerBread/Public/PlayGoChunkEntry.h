#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ChunkSetInstallRequirement.h"
#include "ChunkSetType.h"
#include "PlayGoChunkEntry.generated.h"

USTRUCT(BlueprintType)
struct FPlayGoChunkEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ChunkSetType ChunkSetTypeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Chunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ChunkSetInstallRequirement InstallRequirement;
    
    GINGERBREAD_API FPlayGoChunkEntry();
};

