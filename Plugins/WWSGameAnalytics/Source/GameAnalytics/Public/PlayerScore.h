#pragma once
#include "CoreMinimal.h"
#include "EventDetail.h"
#include "PlayerScore.generated.h"

class UPlayerScore;
class Uscore;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UPlayerScore : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString game_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString user_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString psn_account;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<Uscore*> score_array;
    
    UPlayerScore();

    UFUNCTION(BlueprintCallable)
    static UPlayerScore* NewPlayerScore();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _game_id, const FString& _user_id);
    
};

