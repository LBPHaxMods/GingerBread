#pragma once
#include "CoreMinimal.h"
#include "EventQueueEntry.generated.h"

class UCustomFieldsBase;
class UEventDetail;

USTRUCT(BlueprintType)
struct FEventQueueEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEventDetail* ev;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomFieldsBase* cf;
    
    GINGERBREAD_API FEventQueueEntry();
};

