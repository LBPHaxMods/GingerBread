#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GingerbreadManager.h"
#include "GingerbreadTriggerManager.generated.h"

class AActor;
class AGingerbreadTriggerManager;
class UWorld;

UCLASS(Blueprintable, MinimalAPI)
class AGingerbreadTriggerManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, AActor*> GuidActorLookup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> InitialGuids;
    
public:
    AGingerbreadTriggerManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsGuidRegisteredInInitialList(const FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    bool IsGuidRegistered(const FGuid Guid);
    
    UFUNCTION(BlueprintCallable)
    static AGingerbreadTriggerManager* GetInstance(UWorld* World);
    
};

