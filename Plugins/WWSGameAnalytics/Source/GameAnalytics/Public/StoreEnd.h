#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "StoreEnd.generated.h"

class UStoreEnd;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UStoreEnd : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString store_session_id;
    
    UStoreEnd();

    UFUNCTION(BlueprintCallable)
    static UStoreEnd* NewStoreEnd();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _store_session_id);
    
};

