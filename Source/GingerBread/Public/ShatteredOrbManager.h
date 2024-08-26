#pragma once
#include "CoreMinimal.h"
#include "GingerbreadManager.h"
#include "ShatteredOrbManagerReplicatedState.h"
#include "ShatteredOrbManager.generated.h"

class AShatteredOrbManager;
class UObject;

UCLASS(Blueprintable)
class AShatteredOrbManager : public AGingerbreadManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    FShatteredOrbManagerReplicatedState State;
    
public:
    AShatteredOrbManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AShatteredOrbManager* GetInstance(const UObject* WorldContextObject);
    
};

