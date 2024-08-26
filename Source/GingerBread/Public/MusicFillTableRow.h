#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFillInstruments.h"
#include "MusicFillTableRow.generated.h"

class USoundWave;

USTRUCT(BlueprintType)
struct FMusicFillTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFillInstruments::Type> Instrument;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* SoundAsset;
    
    GINGERBREAD_API FMusicFillTableRow();
};

