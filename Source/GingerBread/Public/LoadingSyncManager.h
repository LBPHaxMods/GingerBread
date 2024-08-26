#pragma once
#include "CoreMinimal.h"
#include "GingerbreadManager.h"
#include "LoadingSyncManagerEventDelegate.h"
#include "LoadingSyncManager.generated.h"

class ALoadingSyncManager;
class UObject;

UCLASS(Blueprintable)
class ALoadingSyncManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerIsReady, meta=(AllowPrivateAccess=true))
    bool ServerIsReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadingSyncManagerEvent ReadyEvent;
    
    ALoadingSyncManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_ServerIsReady();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenTransitionStart();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ALoadingSyncManager* GetInstance(const UObject* WorldContextObject);
    
};

