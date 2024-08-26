#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "ItemAcquire.generated.h"

class UItemAcquire;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UItemAcquire : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString game_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString tx_id;
    
    UItemAcquire();

    UFUNCTION(BlueprintCallable)
    static UItemAcquire* NewItemAcquire();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _item_id);
    
};

