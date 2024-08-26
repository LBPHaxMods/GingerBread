#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "CurrencySpent.generated.h"

class UCurrencySpent;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UCurrencySpent : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString currency_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString sink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tx_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString game_id;
    
    UCurrencySpent();

    UFUNCTION(BlueprintCallable)
    static UCurrencySpent* NewCurrencySpent();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

