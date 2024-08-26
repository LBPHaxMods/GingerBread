#pragma once
#include "CoreMinimal.h"
#include "GingerbreadManager.h"
#include "CrumplerManager.generated.h"

UCLASS(Blueprintable)
class ACrumplerManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Flat_ManagerMinRandTimeTryPlayAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Flat_ManagerMaxRandTimeTryPlayAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Flat_CrumplerMinRandTimeBetweenAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Flat_CrumplerMaxRandTimeBetweenAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Flat_FailedTriggerDelay;
    
public:
    ACrumplerManager(const FObjectInitializer& ObjectInitializer);

};

