#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomFieldsBase.h"
#include "TelemetryId.h"
#include "MilestoneCustomFields.generated.h"

UCLASS(Blueprintable)
class UMilestoneCustomFields : public UCustomFieldsBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTelemetryId reported_player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid reported_save_id;
    
public:
    UMilestoneCustomFields();

};

