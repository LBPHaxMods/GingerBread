#pragma once
#include "CoreMinimal.h"
#include "ESackboyDeathReason.h"
#include "SackboyDeathSettings.generated.h"

USTRUCT(BlueprintType)
struct FSackboyDeathSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InstantDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InstantPop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESackboyDeathReason::Type> DeathReason;
    
    GINGERBREAD_API FSackboyDeathSettings();
};

