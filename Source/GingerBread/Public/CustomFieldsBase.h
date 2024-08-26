#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GingerbreadEventDetail.h"
#include "TelemetryInt.h"
#include "CustomFieldsBase.generated.h"

UCLASS(Blueprintable)
class UCustomFieldsBase : public UGingerbreadEventDetail {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTelemetryInt schema_version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTelemetryInt event_serial_number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid save_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString online_session_id;
    
public:
    UCustomFieldsBase();

};

