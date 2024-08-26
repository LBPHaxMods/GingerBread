#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "SNSInteraction.generated.h"

class USNSInteraction;

UCLASS(Blueprintable)
class GAMEANALYTICS_API USNSInteraction : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 target_np_account_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString interaction_type;
    
    USNSInteraction();

    UFUNCTION(BlueprintCallable)
    static USNSInteraction* NewSNSInteraction();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _interaction_type);
    
};

