#pragma once
#include "CoreMinimal.h"
#include "EPrizeBubbleType.h"
#include "IndexedTableRow.h"
#include "PrizeBubbleRow.generated.h"

class UStaticMesh;
class UTexture2D;

USTRUCT(BlueprintType)
struct FPrizeBubbleRow : public FIndexedTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPrizeBubbleType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> PrizeTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> PrizeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollectScale;
    
    GINGERBREAD_API FPrizeBubbleRow();
};

