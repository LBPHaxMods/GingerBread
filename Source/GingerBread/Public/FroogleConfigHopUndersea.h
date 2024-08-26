#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FroogleConfigHopBase.h"
#include "FroogleConfigHopUndersea.generated.h"

UCLASS(Blueprintable, Config=Engine)
class UFroogleConfigHopUndersea : public UFroogleConfigHopBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HopAttackUnderseaColliderMinSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HopAttackUnderseaColliderMaxSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HopAttackUnderseaColliderScaleDuration;
    
    UFroogleConfigHopUndersea();

};

