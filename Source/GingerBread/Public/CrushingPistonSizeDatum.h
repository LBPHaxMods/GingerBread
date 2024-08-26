#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECrushingPistonSize.h"
#include "CrushingPistonSizeDatum.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FCrushingPistonSizeDatum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECrushingPistonSize::Type> Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PlatformExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> PlatformMesh;
    
    GINGERBREAD_API FCrushingPistonSizeDatum();
};

