#pragma once
#include "CoreMinimal.h"
//#include "EBool.h"
#include "EventDetail.h"
#include "TrophyAchieve.generated.h"

class UTrophyAchieve;

UCLASS(Blueprintable)
class GAMEANALYTICS_API UTrophyAchieve : public UEventDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString event_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString trophy_set_version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString trophy_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString trophy_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_first_time;
    
    UTrophyAchieve();

    UFUNCTION(BlueprintCallable)
    static UTrophyAchieve* NewTrophyAchieve();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FString& _trophy_id);
    
};

