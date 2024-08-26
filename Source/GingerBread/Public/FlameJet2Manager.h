#pragma once
#include "CoreMinimal.h"
#include "GingerbreadManager.h"
#include "FlameJet2Manager.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class AFlameJet2Manager : public AGingerbreadManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* GauzeMaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FlameMaterialInterface;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> CachedDynamicMaterialInstances;
    
public:
    AFlameJet2Manager(const FObjectInitializer& ObjectInitializer);

};

