#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "PSNLink.generated.h"

class UPSNLink;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UPSNLink : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString account_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString otg_id;
    
    UPSNLink();

    UFUNCTION(BlueprintCallable)
    static UPSNLink* NewPSNLink();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
};

