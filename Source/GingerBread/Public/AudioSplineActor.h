#pragma once

#include "CoreMinimal.h"
#include "LevelObject.h"
#include "WakeSleep.h"
#include "PlayerCountActor.h"
#include "AudioSplineActor.generated.h"

class UAudioSplineComponent;
class USplineComponent;
class UTriggerActorComponent;

UCLASS(Blueprintable)
class GINGERBREAD_API AAudioSplineActor : public APlayerCountActor, public IWakeSleep, public ILevelObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioSplineComponent* AudioSplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTriggerActorComponent* TriggerActorComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveChanged, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_EnabledChanged, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
public:
    AAudioSplineActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_EnabledChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveChanged();
    

    // Fix for true pure virtual functions not being implemented
};

