#pragma once
#include "CoreMinimal.h"
#include "CustomFieldsBase.h"
#include "TelemetryId.h"
#include "PlayerJoinLeaveCustomFields.generated.h"

UCLASS(Blueprintable)
class UPlayerJoinLeaveCustomFields : public UCustomFieldsBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTelemetryId reported_player_id;
    
public:
    UPlayerJoinLeaveCustomFields();

};

