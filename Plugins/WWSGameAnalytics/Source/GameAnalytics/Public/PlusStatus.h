#pragma once
#include "CoreMinimal.h"
//#include "EBool.h"
#include "EventDetail.h"
#include "PlusStatus.generated.h"

class UPlusStatus;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UPlusStatus : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString user_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString psn_account;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_authorized;
    
    UPlusStatus();

    UFUNCTION(BlueprintCallable)
    static UPlusStatus* NewPlusStatus();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _user_id, bool _is_authorized);
    
};

