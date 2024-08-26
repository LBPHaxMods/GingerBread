#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EGingerbreadCultureType.h"
#include "EGingerbreadSKUType.h"
#include "GingerbreadSkuRow.generated.h"

USTRUCT(BlueprintType)
struct FGingerbreadSkuRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGingerbreadSKUType SKUType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGingerbreadCultureType> LocalisedTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGingerbreadCultureType> LocalisedAudio;
    
    GINGERBREAD_API FGingerbreadSkuRow();
};

