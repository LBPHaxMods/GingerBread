#pragma once
#include "CoreMinimal.h"
#include "ELevelType.h"
#include "EStickerMeshAnimMode.h"
#include "IndexedTableRow.h"
#include "StickerMeshMaterialInfo.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FStickerMeshMaterialInfo : public FIndexedTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EStickerMeshAnimMode::Type> AnimMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelType LevelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefinitionMaterial;
    
    GINGERBREAD_API FStickerMeshMaterialInfo();
};

