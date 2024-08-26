#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "StoreCartCheckoutEnd.generated.h"

class UStoreCartCheckoutEnd;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UStoreCartCheckoutEnd : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString store_session_id;
    
    UStoreCartCheckoutEnd();

    UFUNCTION(BlueprintCallable)
    static UStoreCartCheckoutEnd* NewStoreCartCheckoutEnd();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _store_session_id);
    
};

