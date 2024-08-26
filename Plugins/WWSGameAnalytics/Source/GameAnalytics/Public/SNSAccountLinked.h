#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "SNSAccountLinked.generated.h"

class USNSAccountLinked;

UCLASS(Blueprintable)
class GAMEANALYTICS_API USNSAccountLinked : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString sn_provider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString account_id;
    
    USNSAccountLinked();

    UFUNCTION(BlueprintCallable)
    static USNSAccountLinked* NewSNSAccountLinked();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _sn_provider);
    
};

