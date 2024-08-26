#pragma once
#include "CoreMinimal.h"
#include "CustomFieldsBase.h"
#include "EPinCategory.h"
#include "EPinTrophyGrade.h"
#include "TelemetryFloat.h"
#include "TelemetryId.h"
#include "TelemetryInt.h"
#include "RewardCustomFields.generated.h"

UCLASS(Blueprintable)
class URewardCustomFields : public UCustomFieldsBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTelemetryId reported_player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPinCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString prize_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPinTrophyGrade trophy_grade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTelemetryFloat Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTelemetryInt Grade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool awarded;
    
public:
    URewardCustomFields();

};

