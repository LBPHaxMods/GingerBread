#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EEnemyGroupType.h"
#include "ConfigAICoordinator.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=AiCoordinator)
class UConfigAICoordinator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEnemyGroupType, FSoftObjectPath> GroupBlueprint;
    
    UConfigAICoordinator();

};

