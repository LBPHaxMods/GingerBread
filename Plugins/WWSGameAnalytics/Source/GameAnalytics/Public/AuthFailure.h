#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "AuthFailure.generated.h"

class UAuthFailure;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UAuthFailure : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString machine_id;
    
    UAuthFailure();

    UFUNCTION(BlueprintCallable)
    static UAuthFailure* NewAuthFailure();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

