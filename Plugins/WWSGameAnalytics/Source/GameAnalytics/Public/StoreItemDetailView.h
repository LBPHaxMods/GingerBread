#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "StoreItemDetailView.generated.h"

class UStoreItemDetailView;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UStoreItemDetailView : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString store_session_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString sku_id;
    
    UStoreItemDetailView();

    UFUNCTION(BlueprintCallable)
    static UStoreItemDetailView* NewStoreItemDetailView();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _store_session_id, const FString& _sku_id);
    
};

