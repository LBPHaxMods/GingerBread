#pragma once
#include "CoreMinimal.h"
#include "NotificationOption.h"
#include "NotificationResultDelegate.h"
#include "EventNotification.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FEventNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotificationOption Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotificationResult ResultDelegate;
    
    GINGERBREAD_API FEventNotification();
};

