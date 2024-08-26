#pragma once
#include "CoreMinimal.h"
#include "HudMaterialSettings.generated.h"

USTRUCT(BlueprintType)
struct FHudMaterialSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AcceptsCubemapOverride;
    
    GINGERBREAD_API FHudMaterialSettings();
};

