#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "StoreStart.generated.h"

class UStoreStart;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UStoreStart : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString store_session_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString entry_point;
    
    UStoreStart();

    UFUNCTION(BlueprintCallable)
    static UStoreStart* NewStoreStart();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _store_session_id);
    
};

