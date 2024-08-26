#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "PeripheralStart.generated.h"

class UPeripheralStart;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UPeripheralStart : public UEventDetail {
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
    FString public_user_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 peripheral_player_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString peripheral_connection;
    
    UPeripheralStart();

    UFUNCTION(BlueprintCallable)
    static UPeripheralStart* NewPeripheralStart();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _openpsid, const FString& _peripheral_session_id, const FString& _peripheral_type, const FString& _peripheral_model, const FString& _peripheral_id, const FString& _public_user_id, int32 _peripheral_player_num, const FString& _peripheral_connection);
    
};

