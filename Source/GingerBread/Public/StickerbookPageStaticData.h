#pragma once
#include "CoreMinimal.h"
#include "ELevelType.h"
#include "Templates/SubclassOf.h"
#include "StickerbookPageStaticData.generated.h"

class UStickerBookPageWidget;
class UTexture2D;

USTRUCT(BlueprintType)
struct FStickerbookPageStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStickerBookPageWidget> PageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PageIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelType RelatedWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnlockWithVoidObject;
    
    GINGERBREAD_API FStickerbookPageStaticData();
};

