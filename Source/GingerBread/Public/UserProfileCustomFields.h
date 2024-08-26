#pragma once
#include "CoreMinimal.h"
#include "EBool.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameAnalytics -ObjectName=EBool -FallbackName=EBool
#include "CustomFieldsBase.h"
#include "TelemetryInt.h"
#include "UserProfileCustomFields.generated.h"

UCLASS(Blueprintable)
class UUserProfileCustomFields : public UCustomFieldsBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBool has_ps_plus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTelemetryInt controller_idx;
    
public:
    UUserProfileCustomFields();

};

