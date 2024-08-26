#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "SNSPost.generated.h"

class USNSPost;

UCLASS(Blueprintable)
class GAMEANALYTICS_API USNSPost : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString sn_provider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString account_id;
    
    USNSPost();

    UFUNCTION(BlueprintCallable)
    static USNSPost* NewSNSPost();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _sn_provider);
    
};

