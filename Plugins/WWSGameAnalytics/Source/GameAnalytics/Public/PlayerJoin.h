#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "PlayerJoin.generated.h"

class UPlayerJoin;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UPlayerJoin : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString game_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString psn_account;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_count_local;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString player_type;
    
    UPlayerJoin();

    UFUNCTION(BlueprintCallable)
    static UPlayerJoin* NewPlayerJoin();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _game_id, const FString& _psn_account, int32 _player_count);
    
};

