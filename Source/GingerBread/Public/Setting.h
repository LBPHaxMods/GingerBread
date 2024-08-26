#pragma once
#include "CoreMinimal.h"
#include "EBool.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameAnalytics -ObjectName=EBool -FallbackName=EBool
#include "CustomEvent.h"
#include "TelemetryFloat.h"
#include "TelemetryInt.h"
#include "Setting.generated.h"

UCLASS(Blueprintable)
class USetting : public UCustomEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTelemetryInt int_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTelemetryFloat float_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString string_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBool bool_value;
    
    USetting();

};

