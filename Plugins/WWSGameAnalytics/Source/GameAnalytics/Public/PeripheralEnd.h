#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "PeripheralEnd.generated.h"

class UPeripheralEnd;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UPeripheralEnd : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString openpsid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString peripheral_session_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString peripheral_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString peripheral_model;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString peripheral_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString psn_account;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 peripheral_player_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString peripheral_connection;
    
    UPeripheralEnd();

    UFUNCTION(BlueprintCallable)
    static UPeripheralEnd* NewPeripheralEnd();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _openpsid, const FString& _peripheral_session_id, const FString& _peripheral_type, const FString& _peripheral_model, const FString& _peripheral_id, const FString& _psn_account, int32 _peripheral_player_num, const FString& _peripheral_connection);
    
};

