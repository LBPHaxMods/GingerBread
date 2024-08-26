#pragma once
#include "CoreMinimal.h"
#include "NotificationOption.h"
#include "NotificationResultDelegate.h"
#include "MultiSelectNotification.generated.h"

USTRUCT(BlueprintType)
struct FMultiSelectNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotificationOption option1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotificationOption option2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotificationOption option3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotificationResult ResultDelegate;
    
    GINGERBREAD_API FMultiSelectNotification();
};

