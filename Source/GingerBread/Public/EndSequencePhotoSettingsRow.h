#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EndSequencePhotoSettingsRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FEndSequencePhotoSettingsRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BackgroundPhoto;
    
    GINGERBREAD_API FEndSequencePhotoSettingsRow();
};

