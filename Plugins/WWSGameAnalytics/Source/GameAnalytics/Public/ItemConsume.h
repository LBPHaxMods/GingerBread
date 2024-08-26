#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "ItemConsume.generated.h"

class UItemConsume;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UItemConsume : public UEventDetail {
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
    
    UItemConsume();

    UFUNCTION(BlueprintCallable)
    static UItemConsume* NewItemConsume();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _item_id);
    
};

