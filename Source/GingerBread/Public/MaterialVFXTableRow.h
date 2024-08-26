#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MaterialVFXTableRow.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FMaterialVFXTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* UseThisVFX;
    
    GINGERBREAD_API FMaterialVFXTableRow();
};

