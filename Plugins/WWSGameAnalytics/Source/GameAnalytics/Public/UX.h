#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "UX.generated.h"

class UUX;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UUX : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString message_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString message_severity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString message_content;
    
    UUX();

    UFUNCTION(BlueprintCallable)
    static UUX* NewUX();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _message_content);
    
};

