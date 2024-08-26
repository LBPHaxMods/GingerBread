#pragma once
#include "CoreMinimal.h"
//#include "EBool.h"
#include "EventDetail.h"
#include "GameStart.generated.h"

class UGameStart;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UGameStart : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString game_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString level_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_count_local;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString entry_point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_online;
    
    UGameStart();

    UFUNCTION(BlueprintCallable)
    static UGameStart* NewGameStart();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _game_id, const FString& _level_id, int32 _player_count, bool _is_online);
    
};

