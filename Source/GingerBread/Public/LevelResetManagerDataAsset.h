#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LevelResetManagerDataAsset.generated.h"

UCLASS(Blueprintable)
class ULevelResetManagerDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartEnabled;
    
    ULevelResetManagerDataAsset();

};

