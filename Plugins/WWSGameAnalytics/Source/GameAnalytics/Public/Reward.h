#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "Reward.generated.h"

class UReward;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UReward : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString reward_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString reason;
    
    UReward();

    UFUNCTION(BlueprintCallable)
    static UReward* NewReward();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _reward_id);
    
};

