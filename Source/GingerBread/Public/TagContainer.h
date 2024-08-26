#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "POI_Data.h"
#include "TagContainer.generated.h"

UCLASS(Blueprintable)
class GINGERBREAD_API UTagContainer : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPOI_Data> TagTable;
    
    UTagContainer();

};

