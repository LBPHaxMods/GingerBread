#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpeechIconStruct.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSpeechIconStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IconSymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconTexture;
    
    GINGERBREAD_API FSpeechIconStruct();
};

