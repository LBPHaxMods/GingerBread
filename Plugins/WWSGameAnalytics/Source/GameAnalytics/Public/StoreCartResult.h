#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "StoreCartResult.generated.h"

class UStoreCartResult;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UStoreCartResult : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString store_session_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString result_code;
    
    UStoreCartResult();

    UFUNCTION(BlueprintCallable)
    static UStoreCartResult* NewStoreCartResult();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _store_session_id, const FString& _result_code);
    
};

