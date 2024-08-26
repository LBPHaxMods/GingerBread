#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "AIBaseConfigTweaker.generated.h"

class UAIConfigBase;

UCLASS(Abstract, Blueprintable)
class GINGERBREAD_API UAIBaseConfigTweaker : public UDataAsset {
    GENERATED_BODY()
public:
    UAIBaseConfigTweaker();

    UFUNCTION(BlueprintCallable)
    static UAIConfigBase* GetAIConfig(TSubclassOf<UAIConfigBase> config_type);
    
};

