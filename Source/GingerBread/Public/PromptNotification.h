#pragma once
#include "CoreMinimal.h"
#include "ENotificationPromptType.h"
#include "NotificationResultDelegate.h"
#include "PromptNotification.generated.h"

USTRUCT(BlueprintType)
struct FPromptNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENotificationPromptType PromptType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PromptText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotificationResult ResultDelegate;
    
    GINGERBREAD_API FPromptNotification();
};

