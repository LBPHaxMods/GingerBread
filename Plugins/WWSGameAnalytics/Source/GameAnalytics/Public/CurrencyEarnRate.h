#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "CurrencyEarnRate.generated.h"

class UCurrencyEarnRate;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UCurrencyEarnRate : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float new_earn_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float old_earn_rate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float currency_earn_period;
    
    UCurrencyEarnRate();

    UFUNCTION(BlueprintCallable)
    static UCurrencyEarnRate* NewCurrencyEarnRate();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

