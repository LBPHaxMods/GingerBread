#pragma once
#include "CoreMinimal.h"
#include "StickerBookTabData.generated.h"

USTRUCT(BlueprintType)
struct FStickerBookTabData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FirstPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastPage;
    
    GINGERBREAD_API FStickerBookTabData();
};

