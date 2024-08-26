#pragma once
#include "CoreMinimal.h"
#include "SpikeyVineSingle.h"
#include "SpikeyVineSingleStandalone.generated.h"

class UCraftCutterTargetComponent;
class UTriggerActorComponent;

UCLASS(Blueprintable)
class ASpikeyVineSingleStandalone : public ASpikeyVineSingle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCraftCutterTargetComponent* CraftCutterTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanEverHaveCraftCutterEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CraftCutterHorizontalExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortVineCraftCutterZExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShortVineCraftCutterZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TallVineCraftCutterZExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TallVineCraftCutterZOffset;
    
public:
    ASpikeyVineSingleStandalone(const FObjectInitializer& ObjectInitializer);

};

