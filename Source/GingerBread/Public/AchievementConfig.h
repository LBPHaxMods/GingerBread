#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AchievementConfig.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Achievement)
class GINGERBREAD_API UAchievementConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> UnlockRequirements;
    
    UAchievementConfig();

};

