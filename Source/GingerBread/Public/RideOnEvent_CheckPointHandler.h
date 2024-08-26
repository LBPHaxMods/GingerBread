#pragma once
#include "CoreMinimal.h"
#include "RideOnEvent.h"
#include "RideOnEvent_CheckPointHandler.generated.h"

class USpawnPointComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API ARideOnEvent_CheckPointHandler : public ARideOnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnPointTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateCheckPoint;
    
    ARideOnEvent_CheckPointHandler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetActiveCheckPoint(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpawnPointComponent* FindSpawnPoint() const;
    
};

