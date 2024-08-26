#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "StoreCartAdd.generated.h"

class UStoreCartAdd;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UStoreCartAdd : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString store_session_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString sku_id;
    
    UStoreCartAdd();

    UFUNCTION(BlueprintCallable)
    static UStoreCartAdd* NewStoreCartAdd();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _store_session_id, const FString& _sku_id);
    
};

