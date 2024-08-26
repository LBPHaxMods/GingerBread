#pragma once
#include "CoreMinimal.h"
#include "Attachment.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAttachment {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttachmentObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachmentArea;
    
public:
    GINGERBREAD_API FAttachment();
};

