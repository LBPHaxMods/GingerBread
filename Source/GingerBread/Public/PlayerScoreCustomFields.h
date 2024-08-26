#pragma once
#include "CoreMinimal.h"
#include "CustomFieldsBase.h"
#include "TelemetryInt.h"
#include "PlayerScoreCustomFields.generated.h"

UCLASS(Blueprintable)
class UPlayerScoreCustomFields : public UCustomFieldsBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString score_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTelemetryInt Value;
    
public:
    UPlayerScoreCustomFields();

};

