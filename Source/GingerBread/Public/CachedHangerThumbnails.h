#pragma once
#include "CoreMinimal.h"
#include "CachedHangerThumbnails.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCachedHangerThumbnails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UTexture2D*> HangerThumbnails;
    
    GINGERBREAD_API FCachedHangerThumbnails();
};

