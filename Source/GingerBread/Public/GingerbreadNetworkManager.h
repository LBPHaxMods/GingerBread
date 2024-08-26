#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GingerbreadManager.h"
#include "NetAllPlayersArrivedDelegate.h"
#include "GingerbreadNetworkManager.generated.h"

class AActor;
class AGingerbreadNetworkManager;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API AGingerbreadNetworkManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetAllPlayersArrived OnNetAllPlayersArrived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetAllPlayersArrived OnNetAllPlayersArrivedAndLoadingSynced;
    
    AGingerbreadNetworkManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDebugNetQuality(int32 iQuality);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActorHit(AActor* SelfActor, UPrimitiveComponent* SelfComponent, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotificationErrorCallbackNoTransition(int32 Result);
    
    UFUNCTION(BlueprintCallable)
    void NotificationErrorCallback(int32 Result);
    
    UFUNCTION(BlueprintCallable)
    void LoadingTransitionFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNetworkPlay() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGingerbreadNetworkManager* GetInstance(const UObject* WorldContextObject);
    
};

