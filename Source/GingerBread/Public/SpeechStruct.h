#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpeechStruct.generated.h"

USTRUCT(BlueprintType)
struct FSpeechStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextLine;
    
    GINGERBREAD_API FSpeechStruct();
};

