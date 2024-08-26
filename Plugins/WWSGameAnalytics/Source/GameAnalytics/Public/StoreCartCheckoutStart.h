#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "StoreCartCheckoutStart.generated.h"

class UStoreCartCheckoutStart;
class Usku_id;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UStoreCartCheckoutStart : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString store_session_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<Usku_id*> sku_id;
    
    UStoreCartCheckoutStart();

    UFUNCTION(BlueprintCallable)
    static UStoreCartCheckoutStart* NewStoreCartCheckoutStart();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _store_session_id);
    
};

