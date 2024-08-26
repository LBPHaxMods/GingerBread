#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "StoreCartRemove.generated.h"

class UStoreCartRemove;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UStoreCartRemove : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString store_session_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString sku_id;
    
    UStoreCartRemove();

    UFUNCTION(BlueprintCallable)
    static UStoreCartRemove* NewStoreCartRemove();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _store_session_id, const FString& _sku_id);
    
};

