#pragma once
#include "CoreMinimal.h"
#include "GingerbreadManager.h"
#include "ObjectTickManager.generated.h"

class ASackboy;
class UAudioListenerTracker;
class USackboyTracker;

UCLASS(Blueprintable)
class AObjectTickManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackerUpdateFrequency;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<USackboyTracker>> SackboyTrackers;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UAudioListenerTracker>> AudioListenerTrackers;
    
private:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ASackboy>> Sackboys;
    
public:
    AObjectTickManager(const FObjectInitializer& ObjectInitializer);

};

